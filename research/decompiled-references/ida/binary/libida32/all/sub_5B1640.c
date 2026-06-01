unsigned __int64 __fastcall sub_5B1640(
        __int64 a1,
        char *a2,
        void (__fastcall *a3)(_QWORD, _QWORD, __int64),
        __int64 a4,
        char a5)
{
  unsigned int v5; // r14d
  unsigned int *v9; // rdi
  int v10; // eax
  unsigned int *v12; // rax
  unsigned int *v13; // rax
  int v14; // r9d
  unsigned int v15; // esi
  unsigned int *v16; // [rsp+0h] [rbp-58h] BYREF
  int v17; // [rsp+8h] [rbp-50h]
  _BYTE v18[12]; // [rsp+Ch] [rbp-4Ch]
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( a2 )
  {
    v5 = *(_DWORD *)a2;
    a3(*(unsigned int *)a2, *((unsigned int *)a2 + 1), a4);
    if ( a2[9] < 0 )
    {
      if ( a5 )
      {
        v16 = nullptr;
        func_parent_iterator_set(&v16, a2);
        v12 = v16;
        v17 = 0;
        if ( v16 )
        {
          if ( *((char *)v16 + 9) >= 0 )
            goto LABEL_19;
          if ( (int)v16[5] > 0 )
          {
            while ( 1 )
            {
              v13 = sub_4EE820(a1 + 1624, *(unsigned int *)(*((_QWORD *)v12 + 3) + 4LL * v17));
              v15 = (unsigned int)v13;
              if ( v13 && *((char *)v13 + 9) < 0 )
                v15 = (unsigned int)sub_4EE820(a1 + 1624, v13[4]);
              sub_5B1640(a1, v15, (_DWORD)a3, a4, 0, v14, (_DWORD)v16, v17, *(__int64 *)&v18[4]);
              v12 = sub_4EE820(a1 + 1624, v5);
              v16 = v12;
              if ( v17 + 1 >= (int)v12[5] )
                break;
              ++v17;
            }
          }
          if ( v12 )
LABEL_19:
            lock_func_range(v12, 0);
        }
      }
    }
    else
    {
      v16 = nullptr;
      *(_QWORD *)v18 = 0;
      func_tail_iterator_set(&v16, a2, 0xFFFFFFFFLL);
      v9 = v16;
      if ( v16 )
      {
        v17 = 0;
        if ( (int)v16[26] <= 0 )
        {
LABEL_8:
          lock_func_range(v9, 0);
        }
        else
        {
          v10 = 0;
LABEL_21:
          v9 = (unsigned int *)(*((_QWORD *)v9 + 14) + 8LL * v10);
          while ( 1 )
          {
            a3(*v9, v9[1], a4);
            v9 = v16;
            if ( !v16 )
              break;
            v10 = v17 + 1;
            if ( v17 + 1 >= (int)v16[26] )
              goto LABEL_8;
            ++v17;
            if ( v10 >= 0 )
              goto LABEL_21;
          }
        }
      }
    }
  }
  return v19 - __readfsqword(0x28u);
}

