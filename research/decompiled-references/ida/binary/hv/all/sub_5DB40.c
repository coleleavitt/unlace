__int64 __fastcall sub_5DB40(__int64 a1, char *a2, int a3)
{
  __int64 v3; // rbx
  const void ***v4; // rbx
  unsigned __int64 v5; // rdx
  const void *v6; // r13
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v12; // rax
  _BYTE *v13; // rax
  __int64 v14; // rax
  __int64 v15; // r14
  size_t v16; // rbx
  void *v17; // rax
  void *v18; // r14
  __int64 v19; // r13
  __int64 v20; // rbx
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int128 v22; // [rsp+8h] [rbp-60h]
  void *v23; // [rsp+20h] [rbp-48h] BYREF
  __int128 v24; // [rsp+28h] [rbp-40h]
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v3 = a3;
  v25 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_64260(a2) )
  {
    ptr = nullptr;
    v22 = 0;
    if ( (_DWORD)v3 == -1 )
    {
      v13 = (_BYTE *)sub_96080(&ptr, 0, 6, 1);
      ptr = v13;
      *(_QWORD *)&v22 = 6;
      *(_DWORD *)v13 = 1380533308;
      v13[4] = 62;
      *((_BYTE *)ptr + 5) = 0;
    }
    else
    {
      v4 = (const void ***)(**(_QWORD **)(a1 + 120) + 16 * v3);
      v5 = (unsigned __int64)(*v4)[1];
      v6 = **v4;
      v24 = 0;
      v23 = nullptr;
      if ( v5 )
      {
        v14 = 32;
        if ( v5 <= 0x20 )
          v14 = v5;
        v15 = v14 + 1;
        v16 = v14;
        v17 = (void *)sub_96080(&v23, 0, v14 + 1, 1);
        *(_QWORD *)&v24 = v15;
        v23 = v17;
        memmove(v17, v6, v16);
        *((_BYTE *)v23 + v16) = 0;
        v18 = v23;
        v19 = v24;
        v23 = nullptr;
        v20 = *((_QWORD *)&v24 + 1);
        v24 = 0;
        if ( ptr )
        {
          j__free(ptr);
          ptr = v18;
          *(_QWORD *)&v22 = v19;
          *((_QWORD *)&v22 + 1) = v20;
          if ( v23 )
          {
            *(_QWORD *)&v24 = 0;
            j__free(v23);
          }
        }
        else
        {
          ptr = v18;
          *(_QWORD *)&v22 = v19;
          *((_QWORD *)&v22 + 1) = v20;
        }
      }
      else
      {
        v22 = 0u;
      }
    }
    v7 = *(__int64 **)(a1 + 112);
    v8 = v7[1];
    v9 = *v7;
    if ( v7[2] < (unsigned __int64)(v8 + 1) )
    {
      v12 = sub_96080(*(_QWORD *)(a1 + 112), v9, v8 + 1, 24);
      *v7 = v12;
      v8 = v7[1];
      v9 = v12;
    }
    v10 = v9 + 24 * v8;
    *(_QWORD *)v10 = 0;
    *(_OWORD *)(v10 + 8) = 0;
    ++v7[1];
    sub_17D80((char **)v10);
    if ( ptr )
    {
      *(_QWORD *)&v22 = 0;
      j__free(ptr);
    }
  }
  return 0;
}

