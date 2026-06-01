__int64 __fastcall sub_AB8540(__int64 a1, unsigned int *a2)
{
  char v3; // al
  __int64 v4; // r12
  __int64 result; // rax
  __int64 v6; // rdx
  unsigned int *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned int *v10; // rbp
  unsigned int *i; // r12
  __int64 v12; // r13
  unsigned int v13; // eax
  _DWORD *v14; // rax
  __int64 v15; // rdi

  v3 = sub_15D2CB0(*(_QWORD *)(a1 + 24), a2);
  v4 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    result = *(_QWORD *)(a1 + 536);
    if ( result )
    {
      v6 = *(unsigned int *)(*(_QWORD *)(v4 + 8832) + 4LL * *a2);
      if ( (unsigned int)v6 < *(_DWORD *)(result - 4) )
      {
        v7 = *(unsigned int **)(result + 8 * v6);
        if ( v7 )
        {
          result = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v7 + 16LL))(v7);
          if ( !(_BYTE)result )
          {
            sub_9936C0(*(_QWORD *)(a1 + 16), v7[3] >> 1);
            v15 = *(_QWORD *)(a1 + 16);
            result = *(_QWORD *)(v15 + 112);
            if ( *(_BYTE *)(result + 430) )
            {
              sub_B6A470(v15, *(unsigned int *)(a1 + 8), v7[2], v7[3] ^ 1, 0, 0);
              return sub_B6A470(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 8), v7[2] ^ 1, v7[3], 0, 0);
            }
          }
        }
      }
    }
  }
  else
  {
    if ( *(_BYTE *)(*(_QWORD *)(v4 + 112) + 436LL) )
    {
      if ( !*((_WORD *)a2 + 2) )
      {
        v14 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
        if ( v14 )
        {
          if ( *(_DWORD *)(a1 + 80) == *v14 )
          {
            if ( v14[1] == 66 )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v4 + 7488) + 48LL))(
                *(_QWORD *)(v4 + 7488),
                *((_QWORD *)a2 + 4));
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 7488) + 64LL))(*(_QWORD *)(v4 + 7488));
              return sub_AB71C0(a1, (__int64)a2);
            }
            if ( v14[1] == 65 )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v4 + 7488) + 48LL))(
                *(_QWORD *)(v4 + 7488),
                *((_QWORD *)a2 + 4));
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 7488) + 64LL))(*(_QWORD *)(v4 + 7488));
              return sub_AB78E0(a1, (__int64)a2);
            }
          }
        }
      }
    }
    result = *(_QWORD *)(v4 + 8656);
    if ( result )
    {
      v8 = *a2;
      if ( (unsigned int)v8 < *(_DWORD *)(result - 4) )
      {
        v9 = *(_QWORD *)(result + 8 * v8);
        if ( v9 )
        {
          result = sub_B39350(v9, *(unsigned int *)(a1 + 8));
          if ( (_DWORD)result != -1 )
          {
            result = (unsigned int)result;
            v10 = *(unsigned int **)(*(_QWORD *)(a1 + 504) + 8LL * (unsigned int)result);
            if ( v10 )
            {
              result = *(v10 - 1);
              for ( i = &v10[result];
                    i != v10;
                    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 7488) + 64LL))(*(_QWORD *)(v12 + 7488)) )
              {
                v12 = *(_QWORD *)(a1 + 16);
                v13 = *v10++;
                (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v12 + 7488) + 48LL))(
                  *(_QWORD *)(v12 + 7488),
                  *(_QWORD *)(*(_QWORD *)(v12 + 8840) + 8LL * (v13 >> 1)));
              }
            }
          }
        }
      }
    }
  }
  return result;
}

