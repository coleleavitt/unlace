__int64 __fastcall sub_1CDC0(__int64 a1)
{
  unsigned __int16 v1; // ax
  unsigned int v2; // edx
  char v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 *v9; // rax
  __int128 v10; // [rsp+0h] [rbp-188h] BYREF
  __int64 v11; // [rsp+10h] [rbp-178h]
  __int64 v12; // [rsp+18h] [rbp-170h]
  __int64 v13; // [rsp+20h] [rbp-168h]
  _BYTE v14[16]; // [rsp+28h] [rbp-160h] BYREF
  __int64 v15; // [rsp+38h] [rbp-150h]
  unsigned __int64 v16; // [rsp+168h] [rbp-20h] BYREF

  v1 = *(_WORD *)(a1 + 40);
  v16 = __readfsqword(0x28u);
  if ( v1 == 61 )
  {
    v3 = 0;
    v8 = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
LABEL_10:
    v2 = 0;
    if ( *(_QWORD *)(a1 + 384) < v8 )
      return v2;
    v4 = *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 42);
    v11 = -1;
    v12 = 0;
    v9 = (unsigned __int64 *)v14;
    v13 = 0;
    v10 = -1;
    do
    {
      *(_WORD *)v9 = 0;
      v9 += 5;
      *((_WORD *)v9 - 19) = 0;
      *((_WORD *)v9 - 18) = 0;
      *((_DWORD *)v9 - 2) = 0;
      *((_WORD *)v9 - 17) = 0;
      *((_OWORD *)v9 - 2) = 0;
      *(v9 - 2) = 0;
    }
    while ( v9 != &v16 );
    if ( (int)decode_insn(&v10, v4, 0.0) > 0 && (_WORD)v12 == 43 && v14[1] == 7 )
      v4 = v15;
    goto LABEL_6;
  }
  if ( v1 > 0x3Du )
  {
    v2 = 0;
    if ( v1 != 63 )
      return v2;
    v3 = 1;
    v8 = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
    goto LABEL_10;
  }
  if ( v1 == 53 )
  {
    v3 = 0;
    v4 = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
    goto LABEL_6;
  }
  v2 = 0;
  if ( v1 == 55 )
  {
    v3 = 1;
    v4 = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
LABEL_6:
    v5 = *(_QWORD *)(a1 + 864);
    v6 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(v5 + 40) = 25344;
    *(_QWORD *)(v5 + 48) = 0;
    *(_QWORD *)(v5 + 64) = v4;
    *(_BYTE *)(v5 + 72) = v3;
    *(_BYTE *)(v5 + 75) = 0;
    *(_QWORD *)(v5 + 56) = v6;
    *(_WORD *)(v5 + 73) = 0;
    return 1;
  }
  return v2;
}
