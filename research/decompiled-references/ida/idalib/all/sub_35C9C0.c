unsigned __int64 __fastcall sub_35C9C0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  _QWORD v8[38]; // [rsp+0h] [rbp-298h] BYREF
  _BYTE v9[304]; // [rsp+130h] [rbp-168h] BYREF
  unsigned __int64 v10; // [rsp+268h] [rbp-30h]

  v2 = a1[1];
  v10 = __readfsqword(0x28u);
  memset(v8, 0, sizeof(v8));
  v8[1] = -1;
  v8[36] = 1;
  LODWORD(v8[37]) = -1;
  if ( a2 < v2 )
  {
LABEL_9:
    a1[1] = a2;
    return v10 - __readfsqword(0x28u);
  }
  if ( v2 < a2 )
  {
    v4 = *a1;
    v5 = a1[2];
    if ( (unsigned __int64)v8 < *a1 || (unsigned __int64)v8 >= v4 + 304 * v5 )
    {
      if ( v5 >= a2 || (v4 = qvector_reserve(a1, *a1, a2, 304), v2 = a1[1], *a1 = v4, v2 < a2) )
      {
        v6 = 304 * v2;
        while ( 1 )
        {
          ++v2;
          qmemcpy((void *)(v4 + v6), v8, 0x130u);
          v6 += 304;
          if ( a2 == v2 )
            break;
          v4 = *a1;
        }
      }
    }
    else
    {
      qmemcpy(v9, v8, sizeof(v9));
      if ( v5 >= a2 || (v4 = qvector_reserve(a1, v4, a2, 304), v2 = a1[1], *a1 = v4, v2 < a2) )
      {
        v7 = 304 * v2;
        while ( 1 )
        {
          ++v2;
          qmemcpy((void *)(v4 + v7), v9, 0x130u);
          v7 += 304;
          if ( a2 == v2 )
            break;
          v4 = *a1;
        }
      }
    }
    goto LABEL_9;
  }
  return v10 - __readfsqword(0x28u);
}
