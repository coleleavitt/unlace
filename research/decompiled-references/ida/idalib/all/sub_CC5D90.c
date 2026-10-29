__int64 __fastcall sub_CC5D90(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v5; // esi
  unsigned int v6; // esi
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 v9[4]; // [rsp+8h] [rbp-20h] BYREF

  switch ( *a1 )
  {
    case 0:
      v9[0] = a3 | 4;
      result = sub_CABAE0(a2, v9);
      break;
    case 1:
      v5 = a1[2];
      v9[0] = a3 | 4;
      result = sub_CA4B40(a2, v5, v9);
      break;
    case 2:
      v6 = a1[2];
      v9[0] = a3 | 4;
      result = sub_CA4BA0(a2, v6, v9);
      break;
    case 3:
      result = sub_CC55C0(a2, *((_QWORD *)a1 + 1), a3);
      break;
    case 4:
    case 7:
      result = 1;
      break;
    case 5:
      v7 = a1[2];
      v8 = a3 | 4;
      v9[0] = a3 | 4;
      result = sub_CA4470(a2, v7, v9);
      if ( (_BYTE)result )
      {
        v9[0] = v8;
        result = sub_CAC1E0(a2, v9);
      }
      break;
    case 6:
      v9[0] = a3 | 4;
      result = sub_CA2930(a2, v9);
      break;
  }
  return result;
}
