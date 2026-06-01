__int64 __fastcall sub_590EE0(__int64 a1, __int64 a2)
{
  int v2; // r15d
  unsigned int *v4; // rbx
  unsigned int v5; // ebp
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // [rsp+8h] [rbp-50h]
  int v16; // [rsp+14h] [rbp-44h]

  v2 = 1;
  v4 = (unsigned int *)&unk_238B840;
  v16 = *(_DWORD *)(a2 + 12);
  v15 = *(_QWORD *)(switch_dbctx(*(int *)(*(_QWORD *)(a1 + 32) + 4LL * v16 + 16)) + 1400);
  switch_dbctx(*(int *)(a1 + 8));
  do
  {
    v5 = *v4;
    v6 = *v4;
    result = get_default_encoding_idx(v6);
    if ( !(_DWORD)result )
    {
      result = v5 - 1;
      if ( (unsigned int)result <= 3
        && (result = dword_238B820[result], (_DWORD)result != -1)
        && (a2 = *(unsigned int *)(v15 + 4 * result + 32), (_DWORD)a2) )
      {
        if ( (_DWORD)a2 != 255 )
        {
          v11 = *(int *)(a1 + 12);
          if ( v16 == 2 || (_DWORD)v11 == v16 )
            sub_58D8A0(v6, a2, v8, v11, v9, v10);
          v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
          v13 = *(_QWORD *)(v12 + 48LL * v16 + 640);
          if ( !v13 )
            goto LABEL_23;
          v14 = v12 + 48LL * v16 + 632;
          do
          {
            if ( (int)a2 > *(_DWORD *)(v13 + 32) )
            {
              v13 = *(_QWORD *)(v13 + 24);
            }
            else
            {
              v14 = v13;
              v13 = *(_QWORD *)(v13 + 16);
            }
          }
          while ( v13 );
          if ( v14 == v12 + 48LL * v16 + 632
            || (int)a2 < *(_DWORD *)(v14 + 32)
            || (a2 = *(unsigned int *)(*(_QWORD *)(v12 + 600) + 12LL * *(_QWORD *)(v14 + 40) + 4 * v11), !(_DWORD)a2) )
          {
LABEL_23:
            sub_58D8C0();
          }
        }
        v6 = v5;
        result = set_default_encoding_idx(v5, a2);
        v2 &= result;
      }
      else
      {
        v2 = 0;
      }
    }
    ++v4;
  }
  while ( &unk_238B84C != (_UNKNOWN *)v4 );
  if ( !v2 )
    return sub_590E10(v6, (const char *)a2);
  return result;
}

