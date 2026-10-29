__int64 __fastcall sub_577D00(__int64 a1, int a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r12
  unsigned int v6; // r13d
  __int64 v7; // rdi
  bool v8; // al
  int v9; // ebp
  __int64 v10; // rax
  unsigned int v11; // ebx
  _BYTE *v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbp
  const char *v17; // rsi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v19; // [rsp+8h] [rbp-40h]
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)a1;
  v20 = __readfsqword(0x28u);
  v5 = (v3 == 0) + v3 - 1;
  v6 = (unsigned __int8)(a2 + 41);
  (*(void (__fastcall **)(__int64, _QWORD))(v4 + 64))(a1, (unsigned __int8)(a2 + 41));
  v7 = *(_QWORD *)(a1 + 720);
  ptr = nullptr;
  v19 = 0;
  if ( (unsigned __int8)is_manual(v7, (unsigned int)a2)
    && get_forced_operand(&ptr, *(_QWORD *)(a1 + 16), (unsigned int)a2) > 0 )
  {
    v17 = haystack;
    if ( (_QWORD)v19 )
      v17 = (const char *)ptr;
    (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v17, 22);
    goto LABEL_4;
  }
  if ( (*(_BYTE *)(a1 + 40LL * a2 + 268) & 8) != 0 )
  {
    v8 = sub_3C9E10(a1, a2);
    v9 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 72) = 0;
    *(_DWORD *)(a1 + 56) = v8;
    v10 = sub_3792E0(0x13u, a1, a1 + 40LL * a2 + 264);
    *(_DWORD *)(a1 + 72) = v9;
    *(_DWORD *)(a1 + 56) = 0;
    if ( v10 == 1 )
    {
LABEL_4:
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, v6);
      v11 = 1;
      goto LABEL_5;
    }
  }
  v13 = *(_BYTE **)(a1 + 24);
  v14 = (__int64)v13;
  if ( v5 )
  {
    v15 = *(_QWORD *)(a1 + 32);
    v16 = v5 + 1;
    if ( v15 < v5 + 1 )
    {
      if ( *(_QWORD *)(a1 + 40) < v16 )
      {
        v14 = qvector_reserve(a1 + 24, *(_QWORD *)(a1 + 24), v5 + 1, 1);
        *(_QWORD *)(a1 + 24) = v14;
        v15 = *(_QWORD *)(a1 + 32);
      }
      memset((void *)(v14 + v15), 0, v16 - v15);
      *(_QWORD *)(a1 + 32) = v16;
      v13 = *(_BYTE **)(a1 + 24);
    }
    else if ( v16 != v15 )
    {
      *(_QWORD *)(a1 + 32) = v16;
    }
    v13[v5] = 0;
    goto LABEL_13;
  }
  if ( !v13 )
  {
LABEL_13:
    v11 = 0;
    goto LABEL_5;
  }
  *(_QWORD *)(a1 + 32) = 0;
  qfree(v13);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  v11 = 0;
LABEL_5:
  if ( ptr )
  {
    *(_QWORD *)&v19 = 0;
    qfree(ptr);
  }
  return v11;
}
