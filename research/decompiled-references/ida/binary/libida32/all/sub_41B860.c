__int64 __fastcall sub_41B860(__int64 **a1, __int64 a2, unsigned int *a3, unsigned int **a4)
{
  unsigned int *v4; // r8
  unsigned int v5; // eax
  unsigned int *v6; // rbp
  unsigned int *v8; // r13
  int v9; // r8d
  int v10; // r9d
  __int64 *v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  int v14; // edi
  __int64 *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rbp
  __int64 *v20; // rax
  unsigned int v21; // edx
  int v22; // edi
  __int64 v23; // rax
  __int64 *p_ptr; // [rsp+0h] [rbp-68h]
  unsigned int v25; // [rsp+Ch] [rbp-5Ch]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v27; // [rsp+18h] [rbp-50h]
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v4 = *a4;
  v28 = __readfsqword(0x28u);
  v5 = *a3;
  v27 = 0;
  ptr = nullptr;
  v25 = v5;
  v6 = &v4[2 * (_QWORD)a4[1]];
  if ( v4 != v6 )
  {
    v8 = v4;
    p_ptr = (__int64 *)&ptr;
    do
    {
      if ( (unsigned int)sub_41A0E0(*(__int64 **)(a2 + 1480), *v8) != 7 )
      {
        v11 = a1[1];
        v12 = *v8;
        v13 = *((_DWORD *)v11 + 2);
        v14 = (_DWORD)v11 + 16;
        if ( *v8 >= v13 && v12 < *((_DWORD *)v11 + 3) )
        {
          *((_BYTE *)v11 + 16) = 43;
          v14 = (_DWORD)v11 + 17;
          v12 -= v13;
        }
        qsnprintf(v14, 63, (int)"%a", v12, v9, v10, (char)p_ptr);
        sub_357520(p_ptr);
      }
      v8 += 2;
    }
    while ( v6 != v8 );
    if ( (unsigned __int64)v27 > 1 )
    {
      v16 = *a1;
      v17 = (*a1)[1];
      v18 = **a1;
      if ( (*a1)[2] < (unsigned __int64)(v17 + 1) )
      {
        v23 = qvector_reserve(*a1, v18, v17 + 1, 24);
        *v16 = v23;
        v17 = v16[1];
        v18 = v23;
      }
      v19 = v18 + 24 * v17;
      *(_QWORD *)v19 = 0;
      *(_OWORD *)(v19 + 8) = 0;
      ++v16[1];
      v20 = a1[1];
      v21 = *((_DWORD *)v20 + 2);
      v22 = (_DWORD)v20 + 16;
      if ( v25 >= v21 && v25 < *((_DWORD *)v20 + 3) )
      {
        *((_BYTE *)v20 + 16) = 43;
        v22 = (_DWORD)v20 + 17;
        v25 -= v21;
      }
      qsnprintf(v22, 63, (int)"%a", v25, v9, v10, (char)p_ptr);
      sub_3573A0((char **)v19);
    }
    if ( ptr )
    {
      *(_QWORD *)&v27 = 0;
      qfree(ptr);
    }
  }
  return 0;
}

