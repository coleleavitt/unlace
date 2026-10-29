__int64 __fastcall sub_67E100(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // r13
  unsigned int *v7; // rbp
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rcx
  unsigned int **v11; // rbx
  unsigned int *v12; // rsi
  _DWORD *v13; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1352) + 24LL))(*(_QWORD *)(a1 + 1352));
  v5 = a2[1];
  if ( v5 )
  {
    result = *(unsigned int *)(v5 - 4);
    if ( (_DWORD)result )
    {
      v6 = 8LL * (unsigned int)(result - 1);
      while ( 1 )
      {
        v10 = *(_QWORD *)(a1 + 184);
        v11 = (unsigned int **)(v6 + v5);
        v12 = *v11;
        if ( v10 )
        {
          result = *v12;
          if ( (unsigned int)result < *(_DWORD *)(v10 - 4) )
          {
            v7 = *(unsigned int **)(v10 + 8 * result);
            if ( v7 )
              break;
          }
        }
        if ( *((_WORD *)v12 + 2)
          || (v13 = *(_DWORD **)(*((_QWORD *)v12 + 2) + 24LL)) == nullptr
          || *v13
          || v13[1] != 8
          || v12[6] != 1 )
        {
          sub_1872CE0("");
          sub_1873130(114, 365);
        }
        v7 = (unsigned int *)sub_15E1A70(*(_QWORD *)(a1 + 144));
        result = sub_67B850((__int64 *)(a1 + 144), v7);
        v8 = *a2;
        v11 = (unsigned int **)(v6 + a2[1]);
        v12 = *v11;
        if ( v7 )
          goto LABEL_6;
LABEL_7:
        if ( v12 && (v9 = v12[2] == 1, --v12[2], v9) )
        {
          result = sub_15D7BC0(v8, v12);
          v6 -= 8;
          *v11 = v7;
          if ( v6 == -8 )
            return result;
        }
        else
        {
          v6 -= 8;
          *v11 = v7;
          if ( v6 == -8 )
            return result;
        }
        v5 = a2[1];
      }
      v8 = *a2;
LABEL_6:
      ++v7[2];
      goto LABEL_7;
    }
  }
  return result;
}

