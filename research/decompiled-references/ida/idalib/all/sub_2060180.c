__int64 __fastcall sub_2060180(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // edx
  __int64 result; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 *v16; // rax
  unsigned __int8 v17; // di
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned __int64 v20; // rax

  v8 = *a1;
  if ( (unsigned int)(v8 - 10) <= 2 )
  {
    result = 0;
    v14 = *((_DWORD *)a1 + 1) & 0x7FFFFFF;
    if ( (unsigned int)a2 < (unsigned int)v14 )
      return *(_QWORD *)&a1[32 * ((unsigned int)a2 - v14)];
  }
  else
  {
    v9 = *((_QWORD *)a1 + 1);
    switch ( (_BYTE)v8 )
    {
      case 2:
        v10 = *(unsigned __int8 *)(v9 + 8);
        if ( (_BYTE)v10 == 16 || (unsigned int)(v10 - 17) <= 1 )
          v11 = *(_DWORD *)(v9 + 32);
        else
          v11 = *(_DWORD *)(v9 + 12);
        result = 0;
        if ( (unsigned int)a2 < v11 )
        {
          v6 = *((_QWORD *)a1 + 1);
          v7 = *(unsigned __int8 *)(v6 + 8);
          if ( (_BYTE)v7 == 16 || (unsigned int)(v7 - 17) <= 1 )
            return sub_205FC70(*(__int64 ***)(v6 + 24), a2, v6, v9, a5, a6);
          else
            return sub_205FC70(
                     *(__int64 ***)(*(_QWORD *)(v6 + 16) + 8LL * (unsigned int)a2),
                     (unsigned int)a2,
                     v6,
                     v9,
                     a5,
                     a6);
        }
        break;
      case 5:
        result = 0;
        if ( *(_DWORD *)(v9 + 32) > (unsigned int)a2 )
        {
          v16 = (__int64 *)sub_20CB0D0(a1);
          return sub_2054E70(v16, (__int64)(a1 + 24));
        }
        break;
      case 6:
        result = 0;
        if ( (unsigned int)a2 < *(_DWORD *)(v9 + 32) )
        {
          v15 = (_QWORD *)sub_20CB0D0(a1);
          return sub_2055C80(v15, (__int64 *)a1 + 3);
        }
        break;
      default:
        v17 = *(_BYTE *)(v9 + 8);
        if ( v17 != 18 )
        {
          if ( (_BYTE)v8 == 1 )
          {
            if ( v17 == 16 || (unsigned int)v17 - 17 <= 1 )
              v18 = *(_DWORD *)(v9 + 32);
            else
              v18 = *(_DWORD *)(v9 + 12);
            if ( (unsigned int)a2 < v18 )
              return sub_20592E0((__int64)a1, a2, v8, v9, a5, a6);
          }
          else if ( (unsigned int)v8 > 1 )
          {
            if ( (unsigned int)(v8 - 3) <= 1 )
            {
              v20 = v17 == 16 ? *(_QWORD *)(v9 + 32) : *(unsigned int *)(v9 + 32);
              if ( (unsigned int)a2 < v20 )
                return sub_205FBA0((__int64)a1, (unsigned int)a2);
            }
          }
          else
          {
            if ( v17 == 16 || (unsigned int)v17 - 17 <= 1 )
              v19 = *(_DWORD *)(v9 + 32);
            else
              v19 = *(_DWORD *)(v9 + 12);
            if ( (unsigned int)a2 < v19 )
              return sub_2058030((__int64)a1, a2, v8, v9, a5, a6);
          }
        }
        return 0;
    }
  }
  return result;
}
