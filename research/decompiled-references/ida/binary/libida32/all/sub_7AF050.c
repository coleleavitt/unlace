__int64 __fastcall sub_7AF050(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v2 = deref_idcv(a1, 0);
  if ( v2 )
  {
    v8 = 0;
    v9 = 0;
    if ( a2 )
    {
      v8 = qvector_reserve(&v8, 0, a2 + 1LL, 1);
      memset((void *)(v8 + v9), 0, a2 + 1LL - v9);
      *(_QWORD *)&v9 = a2 + 1LL;
      *(_BYTE *)(v8 + a2) = 0;
    }
    if ( *(_BYTE *)v2 == 7 )
    {
      v3 = *(void **)(v2 + 8);
      v4 = *(_QWORD *)(v2 + 24);
    }
    else
    {
      free_idcv(v2);
      *(_BYTE *)v2 = 7;
      v4 = 0;
      v3 = nullptr;
    }
    v5 = v8;
    v8 = (__int64)v3;
    v2 += 8;
    *(_QWORD *)v2 = v5;
    *(_QWORD *)(v2 + 8) = v9;
    v6 = *((_QWORD *)&v9 + 1);
    *((_QWORD *)&v9 + 1) = v4;
    *(_QWORD *)(v2 + 16) = v6;
    if ( v3 )
    {
      *(_QWORD *)&v9 = 0;
      qfree(v3);
    }
  }
  return v2;
}

