unsigned __int64 __fastcall sub_7C8480(__int64 *a1, __int64 a2, char a3)
{
  unsigned __int64 result; // rax
  __int64 v6; // rdi
  _BYTE *v7; // rax
  __int64 *v8; // rbx
  char v9; // al
  __int64 v10; // r14
  __int64 v11; // rbp
  char v12; // al
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rdi
  void *v16; // rdx
  __int64 v17; // rdi
  _WORD *v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdx
  unsigned __int64 v22; // [rsp-10h] [rbp-48h]

  if ( (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) == 0 || (result = *(_QWORD *)(a2 + 24), (*(_BYTE *)(result + 29) & 2) == 0) )
  {
    if ( !a3 )
    {
      v20 = *a1;
      v21 = *(_QWORD *)(*a1 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(*a1 + 24) - v21) <= 8 )
      {
        sub_26240F0(v20, "template ", 9);
      }
      else
      {
        *(_BYTE *)(v21 + 8) = 32;
        *(_QWORD *)v21 = 0x6574616C706D6574LL;
        *(_QWORD *)(v20 + 32) += 9LL;
      }
    }
    v6 = *a1;
    v7 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v7 >= *(_QWORD *)(*a1 + 24) )
    {
      sub_26239D0(v6, 60);
    }
    else
    {
      *(_QWORD *)(v6 + 32) = v7 + 1;
      *v7 = 60;
    }
    v8 = (__int64 *)(a2 + 24);
    v9 = 0;
    v10 = a2 + (unsigned int)(8 * *(_DWORD *)(a2 + 20)) + 24;
    if ( 8 * *(_DWORD *)(a2 + 20) )
    {
      do
      {
        v11 = *v8;
        if ( (*(_BYTE *)(*v8 + 29) & 2) == 0 )
        {
          if ( v9 )
          {
            v17 = *a1;
            v18 = *(_WORD **)(*a1 + 32);
            if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v18 <= 1u )
            {
              sub_26240F0(v17, ", ", 2);
            }
            else
            {
              *v18 = 8236;
              *(_QWORD *)(v17 + 32) += 2LL;
            }
          }
          v12 = *(_BYTE *)(v11 + 28) & 0x7F;
          switch ( v12 )
          {
            case 'A':
              sub_7C3990(a1, v11);
              break;
            case '-':
              sub_7C2D90(a1, v11);
              break;
            case 'B':
              sub_7C8100(a1, v11);
              break;
          }
          v9 = 1;
        }
        ++v8;
      }
      while ( (__int64 *)v10 != v8 );
    }
    v13 = *a1;
    result = *(_QWORD *)(*a1 + 32);
    if ( result >= *(_QWORD *)(*a1 + 24) )
    {
      result = sub_26239D0(v13, 62);
    }
    else
    {
      *(_QWORD *)(v13 + 32) = result + 1;
      *(_BYTE *)result = 62;
    }
    if ( (*(_BYTE *)(a2 + 23) & 0x40) != 0 )
    {
      result = *(_DWORD *)(a2 + 20) & 0x1FFFFFFF;
      v14 = *(_QWORD *)(a2 + 8 * result + 24);
      if ( v14 )
      {
        v15 = *a1;
        v16 = *(void **)(*a1 + 32);
        if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v16 <= 9u )
        {
          sub_26240F0(v15, " requires ", 10);
        }
        else
        {
          qmemcpy(v16, " requires ", 10);
          *(_QWORD *)(v15 + 32) += 10LL;
        }
        sub_AE6C50(v14, *a1, 0, (_DWORD)a1 + 8, *((_DWORD *)a1 + 8), a1[3], "\n", 1u);
        result = v22;
      }
    }
    if ( !a3 )
    {
      v19 = *a1;
      result = *(_QWORD *)(*a1 + 32);
      if ( result >= *(_QWORD *)(*a1 + 24) )
      {
        return sub_26239D0(v19, 32);
      }
      else
      {
        *(_QWORD *)(v19 + 32) = result + 1;
        *(_BYTE *)result = 32;
      }
    }
  }
  return result;
}

