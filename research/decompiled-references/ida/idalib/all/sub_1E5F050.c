void __fastcall sub_1E5F050(__int64 a1, __int64 *a2, unsigned __int64 a3, void *a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD **v10; // r9
  __int64 v11; // r12
  char *v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  char *v15; // rbx
  unsigned __int64 v16; // r12
  unsigned int v17; // eax
  unsigned int v18; // eax
  _QWORD v19[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = *a2;
  v19[0] = 0;
  sub_1E5F010(*(_QWORD *)(v6 + 8), v19);
  if ( v19[0] )
  {
    v11 = *(_QWORD *)v19[0];
    v12 = (char *)(v19[0] + 8LL);
    v13 = *(_QWORD *)v19[0] & 0xFFFFFFFFFFFFFFF0LL;
    v14 = *(_QWORD *)v13;
    if ( *(_BYTE *)(*(_QWORD *)v13 + 16LL) == 24
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 24
      && sub_F63050(v14, v19, v7, v8) )
    {
      v15 = v12;
      if ( (unsigned __int8)(*(_WORD *)(v11 + 18) >> 3) != 6 || *(_QWORD *)(v11 + 32) )
        v15 = v12 + 16;
      v16 = (unsigned int)sub_F6C520(*(_QWORD *)(v11 + 40));
      v17 = sub_F6C560(a3);
      memcpy(a4, (const void *)(v16 * ((unsigned __int64)&v15[-(v15 != nullptr)] / v16 + (v15 != nullptr))), v17);
    }
    else
    {
      v18 = sub_F6C560(a3);
      memcpy(a4, v12, v18);
    }
  }
  else
  {
    sub_F6DC70(*v10, a3, (unsigned __int64)a4, *(_DWORD *)(*(_QWORD *)v9 + 208LL));
  }
}
