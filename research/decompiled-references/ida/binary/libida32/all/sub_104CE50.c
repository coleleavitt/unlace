void __fastcall sub_104CE50(__int64 a1, char a2)
{
  __int64 v2; // rax
  int v3; // edx
  char v4; // al
  char *v5; // rsi
  char *v6; // rcx

  *(_BYTE *)(a1 + 628) &= ~0x80u;
  v2 = sub_21D5350();
  v3 = *(_DWORD *)(a1 + 268);
  if ( !a2 )
  {
    *(_QWORD *)(a1 + 88) = v2;
    v4 = *(_BYTE *)(a1 + 272);
    *(_WORD *)(a1 + 62) = 32;
    *(_BYTE *)(a1 + 25) = 32;
    *(_BYTE *)(a1 + 33) = 32;
    *(_BYTE *)(a1 + 23) = 32;
    *(_WORD *)(a1 + 18) = 4112;
    *(_DWORD *)(a1 + 152) = 5;
    *(_BYTE *)(a1 + 184) &= ~2u;
    *(_DWORD *)(a1 + 188) = 32;
    if ( v3 == 5 )
    {
      v5 = "E-m:o-p:32:32-Fi8-f64:32:64-v64:32:64-v128:32:128-a:0:32-n32-S32";
      if ( !v4 )
        v5 = "e-m:o-p:32:32-Fi8-f64:32:64-v64:32:64-v128:32:128-a:0:32-n32-S32";
      v6 = "_";
      goto LABEL_7;
    }
LABEL_4:
    v5 = "E-m:e-p:32:32-Fi8-f64:32:64-v64:32:64-v128:32:128-a:0:32-n32-S32";
    if ( !v4 )
      v5 = "e-m:e-p:32:32-Fi8-f64:32:64-v64:32:64-v128:32:128-a:0:32-n32-S32";
    v6 = (char *)&byte_22CD811;
LABEL_7:
    sub_1009A40((_QWORD *)a1, v5, 64, (__int64)v6);
    return;
  }
  *(_BYTE *)(a1 + 25) = 64;
  *(_WORD *)(a1 + 62) = 64;
  *(_BYTE *)(a1 + 33) = 64;
  *(_BYTE *)(a1 + 23) = 64;
  *(_WORD *)(a1 + 18) = 4112;
  *(_QWORD *)(a1 + 88) = v2;
  *(_DWORD *)(a1 + 152) = 5;
  *(_BYTE *)(a1 + 184) &= ~2u;
  *(_DWORD *)(a1 + 188) = 32;
  if ( v3 != 5 )
  {
    v4 = *(_BYTE *)(a1 + 272);
    goto LABEL_4;
  }
  sub_1009A40((_QWORD *)a1, "e-m:o-p:32:32-Fi8-i64:64-a:0:32-n32-S128", 40, (__int64)"_");
}

