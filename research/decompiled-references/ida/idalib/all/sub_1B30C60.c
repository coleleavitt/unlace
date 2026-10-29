__int64 __fastcall sub_1B30C60(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, double a7)
{
  int v9; // r12d
  unsigned int v10; // r13d
  unsigned __int64 v11; // rax
  char v12; // al
  __int64 v13; // rdx
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  int v19; // [rsp+Ch] [rbp-11Ch]
  __int64 v20; // [rsp+18h] [rbp-110h] BYREF
  __int64 v21; // [rsp+20h] [rbp-108h] BYREF
  int v22; // [rsp+28h] [rbp-100h]
  int v23; // [rsp+2Ch] [rbp-FCh]
  __int64 v24; // [rsp+30h] [rbp-F8h]
  char v25; // [rsp+38h] [rbp-F0h]
  char v26; // [rsp+39h] [rbp-EFh]
  __int64 v27; // [rsp+40h] [rbp-E8h]
  __int16 v28; // [rsp+48h] [rbp-E0h]
  char v29; // [rsp+4Ah] [rbp-DEh]
  unsigned int v30; // [rsp+4Ch] [rbp-DCh]
  __int64 v31; // [rsp+50h] [rbp-D8h]
  _BYTE v32[200]; // [rsp+60h] [rbp-C8h] BYREF

  v9 = a4;
  v19 = a5;
  v10 = sub_C00A40(a2, a2, a3, a4, a5);
  v28 = 257;
  v23 = v19;
  v20 = sub_EEC8C0(a2, a2, a7);
  v21 = a1;
  v22 = v9;
  v24 = a3;
  v25 = 0;
  v26 = a6;
  v27 = 0;
  v29 = 1;
  v30 = v10;
  v31 = v20;
  v11 = sub_BFB9F0(a2);
  v12 = sub_1B2FFC0((unsigned __int64)&v21, v11);
  v13 = 0;
  if ( v12 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 232) + 64LL) > 0x31u )
    {
      v15 = *(unsigned int *)(a3 + 8);
      if ( (_DWORD)v15 )
      {
        if ( (v9 & 0xFFFFFFBF) == 0x26 )
        {
          v16 = *(_QWORD *)a3;
          v17 = *(_QWORD *)a3 + 16 * v15;
          do
          {
            v18 = *(_QWORD *)(v17 - 16) & 0xFFFFFFFFFFFFFFFCLL;
            if ( (*(_WORD *)v18 & 0x1FF) == 0x7C )
            {
              if ( *(_QWORD *)(v18 + 40) )
                return v27;
              sub_168B9F0((__int64)v32, (__int64 *)(a1 + 8), v10, 0xC0Au, 0);
              sub_15884C0((__int64)v32, &v20);
              sub_15F7200(v32);
            }
            v17 -= 16;
          }
          while ( v16 != v17 );
        }
      }
    }
    return v27;
  }
  return v13;
}
