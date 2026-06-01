void __fastcall sub_1070A50(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx
  int v3; // eax
  char *v4; // rsi
  char *v5; // rcx
  size_t v6; // rax

  *(_BYTE *)(a1 + 628) |= 0x80u;
  *(_WORD *)(a1 + 18) = 4112;
  *(_WORD *)(a1 + 62) = 64;
  *(_BYTE *)(a1 + 25) = 64;
  *(_BYTE *)(a1 + 33) = 64;
  *(_BYTE *)(a1 + 23) = 64;
  v1 = sub_21F9090();
  v2 = *(_DWORD *)(a1 + 268);
  *(_QWORD *)(a1 + 88) = v1;
  v3 = *(_DWORD *)(a1 + 260);
  if ( v3 == 15 )
  {
    *(_BYTE *)(a1 + 184) |= 2u;
    *(_DWORD *)(a1 + 188) = 0;
    if ( v2 != 5 )
    {
      v5 = (char *)&byte_22F0C30;
      v4 = "e-m:w-p:32:32-Fi8-i64:64-v128:64:128-a:0:32-n32-S64";
      goto LABEL_8;
    }
LABEL_11:
    v4 = "E-m:o-p:32:32-Fi8-i64:64-v128:64:128-a:0:32-n32-S64";
    v5 = "_";
    if ( !*(_BYTE *)(a1 + 272) )
      v4 = "e-m:o-p:32:32-Fi8-i64:64-v128:64:128-a:0:32-n32-S64";
    goto LABEL_8;
  }
  if ( (unsigned int)(v3 - 11) > 1 )
    *(_DWORD *)(a1 + 152) = 6;
  *(_BYTE *)(a1 + 184) |= 2u;
  *(_DWORD *)(a1 + 188) = 0;
  if ( v2 == 5 )
    goto LABEL_11;
  if ( v3 == 19 )
  {
    v6 = j__strlen("e-m:e-p:32:32-Fi8-i64:64-v128:64:128-a:0:32-n32-S128");
    sub_102D780((_QWORD *)a1, "e-m:e-p:32:32-Fi8-i64:64-v128:64:128-a:0:32-n32-S128", v6, (__int64)&byte_22F0C30);
    return;
  }
  v4 = "E-m:e-p:32:32-Fi8-i64:64-v128:64:128-a:0:32-n32-S64";
  v5 = (char *)&byte_22F0C30;
  if ( !*(_BYTE *)(a1 + 272) )
    v4 = "e-m:e-p:32:32-Fi8-i64:64-v128:64:128-a:0:32-n32-S64";
LABEL_8:
  sub_102D780((_QWORD *)a1, v4, 51, (__int64)v5);
}
