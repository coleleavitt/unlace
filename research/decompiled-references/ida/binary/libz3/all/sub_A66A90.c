__int64 __fastcall sub_A66A90(
        __int64 *a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r12
  unsigned int v11; // eax
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbp
  unsigned int v18; // eax
  __int64 v20; // rsi
  int v21; // edx
  int v22; // eax
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // r12d
  __int64 (__fastcall *v28)(__int64 *, __int64); // r12
  __int64 v29; // rax

  v8 = *(_QWORD *)(a1[2] + 8656);
  if ( v8 )
  {
    v9 = *a2;
    if ( (unsigned int)v9 < *(_DWORD *)(v8 - 4) )
    {
      v10 = *(_QWORD *)(v8 + 8 * v9);
      if ( v10 )
      {
        v11 = sub_B39350(*(_QWORD *)(v8 + 8 * v9), *((unsigned int *)a1 + 2));
        if ( v11 != -1 && *(_QWORD *)(a1[4] + 8LL * v11) == v10 )
          return sub_B39350(v10, *((unsigned int *)a1 + 2));
      }
    }
  }
  if ( !*((_WORD *)a2 + 2) )
  {
    v12 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
    if ( v12 )
    {
      if ( *v12 == 5 )
      {
        v21 = v12[1];
        switch ( v21 )
        {
          case 6:
            return sub_A672F0((int)a1, a7);
          case 9:
            return sub_A66810((__int64)a1, (__int64)a2);
          case 10:
            return sub_9C70C0(a1, (__int64)a2);
          case 11:
            return sub_9C6FA0(a1, (__int64)a2);
          case 16:
            return sub_9C72C0(a1, (__int64)a2);
          case 15:
            return sub_9C71C0(a1, (__int64)a2);
          case 18:
            return sub_A66DC0((int)a1);
          case 19:
            return sub_A676A0((int)a1);
          case 0:
            return sub_A66680((__int64)a1, a2);
          case 7:
            return sub_A67400((int)a1, a7);
        }
        if ( v12[1] == 22 )
        {
          sub_9C7DF0((__int64)a1, (__int64)a2);
          return sub_9A0D90((__int64)a1, a2);
        }
      }
    }
  }
  if ( (unsigned __int8)sub_1666670(a1 + 59, a2) )
  {
    sub_9C7DF0((__int64)a1, (__int64)a2);
    v20 = sub_9A0C70((__int64)a1, a2);
    return (*(__int64 (__fastcall **)(__int64 *, __int64))*a1)(a1, v20);
  }
  else
  {
    v13 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
    if ( v13 && *v13 == 5 )
    {
      if ( *((_WORD *)a2 + 2) || (v22 = v13[1], (unsigned int)(v22 - 12) > 1) && v22 != 17 )
        sub_9C7DF0((__int64)a1, (__int64)a2);
      v23 = (_QWORD *)a1[2];
      v24 = v23[1082];
      if ( v24 && (v25 = *a2, (unsigned int)v25 < *(_DWORD *)(v24 - 4)) && (v26 = *(_QWORD *)(v24 + 8 * v25)) != 0 )
      {
        return sub_B39350(v26, *((unsigned int *)a1 + 2));
      }
      else
      {
        v27 = 0;
        if ( a2[6] )
        {
          while ( 1 )
          {
            ++v27;
            sub_B6F780((int)v23);
            if ( v27 >= a2[6] )
              break;
            v23 = (_QWORD *)a1[2];
          }
        }
        v28 = *(__int64 (__fastcall **)(__int64 *, __int64))*a1;
        v29 = sub_9A0C70((__int64)a1, a2);
        return v28(a1, v29);
      }
    }
    else
    {
      v14 = (_QWORD *)a1[2];
      v15 = v14[1082];
      if ( !v15 || (v16 = *a2, (unsigned int)v16 >= *(_DWORD *)(v15 - 4)) || !*(_QWORD *)(v15 + 8 * v16) )
      {
        sub_B6F780((int)v14);
        v16 = *a2;
        v15 = *(_QWORD *)(a1[2] + 8656);
      }
      v17 = *(_QWORD *)(v15 + 8 * v16);
      v18 = sub_B39350(v17, *((unsigned int *)a1 + 2));
      if ( v18 != -1 && v17 == *(_QWORD *)(a1[4] + 8LL * v18) )
        return sub_B39350(v17, *((unsigned int *)a1 + 2));
      else
        return (*(__int64 (__fastcall **)(__int64 *, __int64))*a1)(a1, v17);
    }
  }
}

