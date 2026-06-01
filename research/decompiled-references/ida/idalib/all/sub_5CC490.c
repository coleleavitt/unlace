unsigned __int64 __fastcall sub_5CC490(
        __int64 a1,
        unsigned __int64 *a2,
        void (__fastcall *a3)(unsigned __int64, unsigned __int64, __int64),
        __int64 a4,
        char a5)
{
  unsigned __int64 v5; // r14
  unsigned __int64 *v9; // rdi
  int v10; // eax
  unsigned __int64 *v12; // rax
  unsigned __int64 *v13; // rax
  int v14; // r9d
  unsigned int v15; // esi
  unsigned __int64 *v16; // [rsp+0h] [rbp-68h] BYREF
  int v17; // [rsp+8h] [rbp-60h]
  __int128 v18; // [rsp+10h] [rbp-58h]
  __int64 v19; // [rsp+20h] [rbp-48h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( a2 )
  {
    v5 = *a2;
    a3(*a2, a2[1], a4);
    if ( *((char *)a2 + 17) < 0 )
    {
      if ( a5 )
      {
        v16 = nullptr;
        func_parent_iterator_set(&v16, a2);
        v12 = v16;
        v17 = 0;
        if ( v16 )
        {
          if ( *((char *)v16 + 17) >= 0 )
            goto LABEL_19;
          if ( *((int *)v16 + 8) > 0 )
          {
            while ( 1 )
            {
              v13 = sub_505D70(a1 + 1704, *(_QWORD *)(v12[5] + 8LL * v17));
              v15 = (unsigned int)v13;
              if ( v13 && *((char *)v13 + 17) < 0 )
                v15 = (unsigned int)sub_505D70(a1 + 1704, v13[3]);
              sub_5CC490(a1, v15, (_DWORD)a3, a4, 0, v14, (_DWORD)v16, v17, v18, DWORD2(v18), v19);
              v12 = sub_505D70(a1 + 1704, v5);
              v16 = v12;
              if ( v17 + 1 >= *((_DWORD *)v12 + 8) )
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
      v18 = 0;
      func_tail_iterator_set(&v16, a2, -1);
      v9 = v16;
      if ( v16 )
      {
        v17 = 0;
        if ( *((int *)v16 + 32) <= 0 )
        {
LABEL_8:
          lock_func_range(v9, 0);
        }
        else
        {
          v10 = 0;
LABEL_21:
          v9 = (unsigned __int64 *)(v9[17] + 16LL * v10);
          while ( 1 )
          {
            a3(*v9, v9[1], a4);
            v9 = v16;
            if ( !v16 )
              break;
            v10 = v17 + 1;
            if ( v17 + 1 >= *((_DWORD *)v16 + 32) )
              goto LABEL_8;
            ++v17;
            if ( v10 >= 0 )
              goto LABEL_21;
          }
        }
      }
    }
  }
  return v20 - __readfsqword(0x28u);
}
