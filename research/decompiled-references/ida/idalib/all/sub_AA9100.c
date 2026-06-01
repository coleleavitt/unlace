__int64 __fastcall sub_AA9100(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // bp
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  __int64 *v10; // r14
  __int64 *v11; // r13
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v15; // rbp

  v5 = a4;
  v7 = sub_F60F10(a2, a2, a3, a4, a5);
  v8 = sub_6F3660(v7);
  v10 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0
    && ((v11 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL),
         v12 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL,
         v13 = v12 | ((unsigned __int8)a3 | (unsigned __int8)*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL]) & 7,
         (*(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v8) & 7) == v13)
     || v5 && sub_9EC890(*v11, a2, v13, v12, v9) && (v15 = sub_A97D20(a1, *v10), v15 == sub_A97D20(a1, *v11))) )
  {
    return a3;
  }
  else
  {
    return 0;
  }
}
