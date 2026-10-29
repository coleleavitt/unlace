__int64 __fastcall sub_8FA910(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  char *v14; // rbx
  unsigned int *v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // ebx
  __int64 v21; // rdx

  v3 = *(_QWORD *)(a1 + 8832);
  if ( v3 )
  {
    v4 = *a2;
    if ( (unsigned int)v4 < *(_DWORD *)(v3 - 4) )
    {
      v5 = *(_DWORD *)(v3 + 4 * v4);
      if ( v5 != 0x7FFFFFFF )
      {
        v6 = *(_QWORD *)(a1 + 8872) + 16LL * v5;
        if ( *(char *)(v6 + 14) < 0 )
        {
          if ( *(char *)(v6 + 11) < 0 )
            goto LABEL_32;
          v16 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
          if ( v16 > *(_DWORD *)(a1 + 184) )
            v16 = *(_DWORD *)(a1 + 184);
          if ( v16 > 1 )
          {
LABEL_32:
            v17 = *(_QWORD *)(a1 + 8848);
            v18 = 2 * v5;
            if ( *(_BYTE *)(v17 + v18) )
            {
              v19 = *(_QWORD *)(a1 + 9024);
              v20 = v18 + (*(char *)(v17 + v18) == -1);
              if ( !v19 || (v21 = *(unsigned int *)(v19 - 4), (_DWORD)v21 == *(_DWORD *)(v19 - 8)) )
              {
                sub_692C60((unsigned int **)(a1 + 9024));
                v19 = *(_QWORD *)(a1 + 9024);
                v21 = *(unsigned int *)(v19 - 4);
              }
              *(_DWORD *)(v19 + 4 * v21) = v20;
              ++*(_DWORD *)(v19 - 4);
            }
          }
        }
      }
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8952) + 48LL))(
             *(_QWORD *)(a1 + 8952),
             a2);
  if ( !*((_WORD *)a2 + 2) )
  {
    v8 = *(_QWORD *)(a1 + 8656);
    if ( v8 )
    {
      v9 = *a2;
      if ( (unsigned int)v9 < *(_DWORD *)(v8 - 4) )
      {
        if ( *(_QWORD *)(v8 + 8 * v9) )
          sub_9533B0(*(_QWORD *)(a1 + 7472));
      }
    }
    v10 = *(unsigned int **)(*((_QWORD *)a2 + 2) + 24LL);
    if ( v10 )
    {
      v11 = *v10;
      v10 = nullptr;
      if ( (unsigned int)(v11 + 1) > 1 )
      {
        v10 = *(unsigned int **)(a1 + 8672);
        if ( v10 )
        {
          if ( (unsigned int)v11 >= *(v10 - 1) )
          {
            v10 = nullptr;
          }
          else
          {
            v10 = *(unsigned int **)&v10[2 * v11];
            if ( v10 )
              (*(void (__fastcall **)(unsigned int *, unsigned int *))(*(_QWORD *)v10 + 88LL))(v10, a2);
          }
        }
      }
    }
    result = *(_QWORD *)(a1 + 8656);
    if ( result )
    {
      v12 = *a2;
      if ( (unsigned int)v12 < *(_DWORD *)(result - 4) )
      {
        v13 = *(_QWORD *)(result + 8 * v12);
        if ( v13 )
        {
          result = (unsigned int)(*(int *)(v13 + 64) >> 8);
          if ( (_DWORD)result != -1 )
          {
            v14 = (char *)(v13 + 64);
            while ( 1 )
            {
              result = (unsigned int)*v14;
              if ( *v14 == -1 )
                goto LABEL_36;
              v15 = *(unsigned int **)(a1 + 8672);
              if ( !v15 )
                goto LABEL_25;
              if ( (unsigned int)result >= *(v15 - 1) )
              {
LABEL_36:
                v15 = nullptr;
                if ( v10 )
                  goto LABEL_26;
LABEL_37:
                v14 = *((char **)v14 + 1);
                if ( !v14 )
                  return result;
              }
              else
              {
                result = (unsigned int)result;
                v15 = *(unsigned int **)&v15[2 * (unsigned int)result];
LABEL_25:
                if ( v10 == v15 )
                  goto LABEL_37;
LABEL_26:
                result = (*(__int64 (__fastcall **)(unsigned int *, unsigned int *))(*(_QWORD *)v15 + 88LL))(v15, a2);
                v14 = *((char **)v14 + 1);
                if ( !v14 )
                  return result;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

