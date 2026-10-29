__int64 __fastcall sub_A68200(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 (*v11)(); // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v5 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)(*(_QWORD *)(sub_F63050(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5) + 8)
                 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) != 13 || (a2 = 0, ((*(_WORD *)(v6 + 18) >> 3) & 0x1FF) != 0x1E8) )
  {
    v13 = sub_F68450(*v5, a2, v7, v8, v9);
    LODWORD(a2) = 0;
    v14 = *(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v14 & 8) != 0 )
      a2 = *(__int64 *)((char *)&qword_18 + (v14 & 0xFFFFFFFFFFFFFFF0LL));
    a2 = (unsigned int)a2 >> 9;
  }
  v10 = *(_QWORD *)(a1 + 17448);
  v11 = *(__int64 (**)())(*(_QWORD *)v10 + 40LL);
  if ( v11 == sub_A55E80 )
    return 0;
  else
    return ((__int64 (__fastcall *)(__int64, __int64))v11)(v10, a2);
}
