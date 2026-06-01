/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deref_idcv
// Address: 0x0000000100037BA0

//----- (0000000100037BA0) ----------------------------------------------------
unsigned __int8 *__fastcall deref_idcv(unsigned __int8 *a1, char a2)
{
  unsigned __int8 *v2; // rbx
  __int64 v4; // r15
  unsigned __int8 *v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned __int8 **v11; // rdx
  __int128 v13; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+10h] [rbp-40h]

  if ( a1 )
  {
    v2 = a1;
    if ( *a1 == 10 )
    {
      v13 = 0;
      v14 = 0;
      v4 = sub_100032010();
      v5 = a1;
      while ( 1 )
      {
        v6 = *((int *)v5 + 4);
        if ( v6 < 0 )
        {
          v5 = (unsigned __int8 *)sub_100037B10(v4, ~(_DWORD)v6);
          if ( !v5 )
            goto LABEL_23;
        }
        else
        {
          v7 = *((_QWORD *)v5 + 1);
          if ( !v7 )
            goto LABEL_23;
          if ( *(_DWORD *)v7 != 289621065 )
            goto LABEL_23;
          if ( *(_QWORD *)(v7 + 32) <= (unsigned __int64)v6 )
            goto LABEL_23;
          v5 = (unsigned __int8 *)(*(_QWORD *)(v7 + 24) + 32 * v6);
          if ( !v5 )
            goto LABEL_23;
        }
        if ( (a2 & 1) != 0 || *v5 != 10 )
          break;
        v9 = *((_QWORD *)&v13 + 1);
        v8 = (_QWORD *)v13;
        v10 = 8LL * *((_QWORD *)&v13 + 1);
        v11 = (unsigned __int8 **)v13;
        if ( 8LL * *((_QWORD *)&v13 + 1) )
        {
          v11 = (unsigned __int8 **)v13;
          while ( v5 != *v11 )
          {
            ++v11;
            v10 -= 8;
            if ( !v10 )
              goto LABEL_20;
          }
        }
        if ( v11 != (unsigned __int8 **)(v13 + 8LL * *((_QWORD *)&v13 + 1)) )
        {
LABEL_23:
          set_qerrno();
LABEL_24:
          v2 = nullptr;
          goto LABEL_25;
        }
LABEL_20:
        if ( v14 < *((_QWORD *)&v13 + 1) + 1LL )
        {
          v8 = qvector_reserve((__int64)&v13, (void *)v13, *((_QWORD *)&v13 + 1) + 1LL, 8u);
          *(_QWORD *)&v13 = v8;
          v9 = *((_QWORD *)&v13 + 1);
        }
        v8[v9] = v5;
        ++*((_QWORD *)&v13 + 1);
      }
      if ( (a2 & 2) != 0 )
      {
        *a1 = 2;
        if ( (unsigned int)copy_idcv(a1, v5) )
          goto LABEL_24;
      }
      else
      {
        v2 = v5;
      }
LABEL_25:
      if ( (_QWORD)v13 )
      {
        *((_QWORD *)&v13 + 1) = 0;
        qfree((void *)v13);
      }
    }
  }
  else
  {
    set_qerrno();
    return nullptr;
  }
  return v2;
}
