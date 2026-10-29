__int64 __fastcall sub_B65500(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int **v3; // r13
  _QWORD *v4; // rbx
  __int64 v5; // rbp
  unsigned int v6; // eax
  unsigned int *v7; // rax
  _DWORD *v8; // rdx
  __int64 v9; // rdx

  result = sub_8E7030((__int64)a1);
  if ( (_DWORD)result )
  {
    v3 = (unsigned int **)(a2 + 32);
    v4 = sub_918D00(a1[936], a2);
    result = 8LL * *(unsigned int *)(a2 + 24);
    v5 = a2 + 32 + result;
    if ( result )
    {
      do
      {
        v7 = *v3;
        if ( !*((_WORD *)*v3 + 2)
          && (v8 = *(_DWORD **)(*((_QWORD *)v7 + 2) + 24LL)) != nullptr
          && !*v8
          && v8[1] == 8
          && v7[6] == 1 )
        {
          v6 = sub_B645B0((__int64)a1, *((unsigned int **)v7 + 4)) ^ 1;
        }
        else
        {
          v9 = a1[13];
          if ( v7 == *(unsigned int **)(v9 + 856) )
          {
            v6 = dword_1C7ED6C;
          }
          else if ( v7 == *(unsigned int **)(v9 + 864) )
          {
            v6 = dword_1C7ED68;
          }
          else
          {
            v6 = 2 * *(_DWORD *)(a1[1104] + 4LL * *v7);
          }
        }
        ++v3;
        result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, _QWORD *))(*(_QWORD *)a1[936] + 24LL))(
                   a1[936],
                   *(_QWORD *)(a1[1105] + 8LL * (v6 >> 1)),
                   (v6 & 1) == 0,
                   v4);
      }
      while ( (unsigned int **)v5 != v3 );
    }
  }
  return result;
}

