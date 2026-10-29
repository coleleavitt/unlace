__int64 __fastcall sub_C69980(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rcx
  __int64 result; // rax
  int v8; // ecx
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rcx
  int v12; // edx
  unsigned __int8 v13; // [rsp+1h] [rbp-69h]
  unsigned __int8 v14; // [rsp+1h] [rbp-69h]
  __int64 v15[2]; // [rsp+2h] [rbp-68h] BYREF
  unsigned int v16; // [rsp+12h] [rbp-58h] BYREF
  char v17; // [rsp+16h] [rbp-54h]
  __int64 v18; // [rsp+1Ah] [rbp-50h] BYREF
  unsigned int v19; // [rsp+22h] [rbp-48h]
  char v20; // [rsp+26h] [rbp-44h]
  int v21; // [rsp+2Ah] [rbp-40h]

  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  result = 0;
  if ( *(_BYTE *)(v6 + 16) == 13 )
  {
    v8 = *(unsigned __int16 *)(v6 + 18);
    LOWORD(v8) = (unsigned __int16)v8 >> 3;
    v9 = (unsigned int)(v8 + 56);
    LOWORD(v9) = v9 & 0x1FF;
    if ( (unsigned __int16)v9 <= 0x17u )
    {
      v15[0] = a3;
      v16 = 0;
      v17 &= ~1u;
      v15[1] = (__int64)&v16;
      result = sub_C68630(v15, a1, a3, v9, a5, a6);
      v10 = v16;
      if ( (_BYTE)result )
      {
        if ( v16 == 4 )
        {
          if ( *(_DWORD *)(a2 + 8) <= 0x40u && v19 <= 0x40 )
          {
            *(_DWORD *)(a2 + 8) = v19;
            v11 = v18;
            *(_BYTE *)(a2 + 12) = v20;
            v12 = v21;
            *(_QWORD *)a2 = v11;
            *(_DWORD *)(a2 + 16) = v12;
            goto LABEL_10;
          }
          v14 = result;
          sub_22056A0(a2, &v18);
          v10 = v16;
          result = v14;
          *(_BYTE *)(a2 + 12) = v20;
          *(_DWORD *)(a2 + 16) = v21;
        }
        else
        {
          result = 0;
        }
      }
      if ( v10 <= 1 )
        return result;
LABEL_10:
      v13 = result;
      sub_A4F8E0((int *)&v16);
      return v13;
    }
  }
  return result;
}
