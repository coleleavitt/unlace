__int64 __fastcall sub_BF360(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, double a5, double a6)
{
  unsigned int v8; // ebp
  unsigned int v9; // ebx
  __int64 v10; // r8
  unsigned int *v11; // rdi
  unsigned int *v12; // rax
  __int64 v13; // r15
  unsigned int *v15; // rsi
  char *v16; // rcx
  __int64 v17; // rdx
  signed __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // [rsp+0h] [rbp-4C8h]
  __int64 v27; // [rsp+0h] [rbp-4C8h]
  __int64 v28; // [rsp+0h] [rbp-4C8h]
  char v29[1032]; // [rsp+80h] [rbp-448h] BYREF
  unsigned __int64 v30; // [rsp+488h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v8 = a4;
  if ( a4 == -1 )
    v8 = *(_DWORD *)(a2 + 4);
  setup_selector();
  sub_B74F0((__int64)v29, 1024, a2);
  v9 = add_segm_ex();
  if ( !(_BYTE)v9 )
    return 0;
  if ( a1 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    if ( !v10
      || (v11 = *(unsigned int **)a1,
          v26 = *(_QWORD *)(a1 + 8),
          v12 = sub_B8800(*(unsigned int **)a1, v26, 0, a3 + 1),
          v10 = v26,
          !v12) )
    {
      v13 = 0;
      goto LABEL_15;
    }
    if ( a3 >= v12[1] )
    {
LABEL_11:
      v13 = (char *)v12 - (char *)v11 + 12;
LABEL_15:
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v10 + 1) )
      {
        v27 = *(_QWORD *)(a1 + 16);
        v19 = qvector_reserve();
        v20 = *(_QWORD *)(a1 + 8);
        v21 = *(_QWORD *)(a1 + 16);
        v22 = *(unsigned int **)a1;
        v15 = (unsigned int *)v19;
        *(_QWORD *)(a1 + 16) = v27;
        v23 = v20 - 1;
        if ( v23 >= 0 )
        {
          do
          {
            v24 = *(_QWORD *)v22;
            v19 += 12;
            v22 += 3;
            *(_QWORD *)(v19 - 12) = v24;
            *(_DWORD *)(v19 - 4) = *(v22 - 1);
          }
          while ( v23-- != 0 );
        }
        v28 = v21;
        qfree();
        *(_QWORD *)(a1 + 16) = v28;
        v10 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v15;
      }
      else
      {
        v15 = *(unsigned int **)a1;
      }
      v16 = (char *)v15 + v13;
      v17 = 3 * v10;
      v18 = 12 * v10 - v13;
      if ( (__int64)(0xAAAAAAAAAAAAAAABLL * (v18 >> 2) - 1) >= 0 )
      {
        memmove(&v16[v18 + 12 + -4 * (v18 >> 2)], &v15[v17 - (v18 >> 2)], v18);
        v16 = (char *)v15 + v13;
      }
      *(_DWORD *)v16 = a3;
      *((_DWORD *)v16 + 1) = v8;
      v16[8] = 1;
      ++*(_QWORD *)(a1 + 8);
      goto LABEL_20;
    }
    if ( a3 != *v12 )
    {
      v12[1] = a3;
      v11 = *(unsigned int **)a1;
      v10 = *(_QWORD *)(a1 + 8);
      goto LABEL_11;
    }
    v12[1] = v8;
  }
LABEL_20:
  if ( (dword_24412C & 1) != 0 )
    sub_8F660((__int64)"%a: created segment %s, end: %a\n", NAN, (const char *)a3, a6);
  return v9;
}

