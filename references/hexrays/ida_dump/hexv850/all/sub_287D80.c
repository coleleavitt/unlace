__int64 __fastcall sub_287D80(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  char *v3; // r12
  unsigned int v4; // ebx
  _QWORD *v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r12
  int v9; // eax
  __int64 v10; // rdx
  __int64 tinfo_property; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-50h] BYREF
  char *s1; // [rsp+8h] [rbp-48h] BYREF
  __int128 v20; // [rsp+10h] [rbp-40h]
  unsigned __int64 v21; // [rsp+20h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v20 = 0;
  s1 = nullptr;
  v2 = sub_24FA30(*(_QWORD *)(a2 + 24), (__int64 *)&s1, 0, 0);
  v3 = s1;
  v4 = v2;
  if ( (_BYTE)v2 )
  {
    if ( !(_QWORD)v20
      || strcmp(s1, "memcpy") && strcmp(v3, "memset")
      || (v6 = *(_QWORD **)(a2 + 32), v6[1] != 3)
      || (v7 = *v6, *(_DWORD *)(*v6 + 152LL) != 61) )
    {
      v4 = 0;
      goto LABEL_4;
    }
    v8 = sub_250670(*(__int64 **)(v7 + 168), (_QWORD *)(v7 + 192));
    if ( v8 == -1 )
      goto LABEL_19;
    v9 = *(_DWORD *)(v7 + 8);
    v10 = v7;
    if ( v9 == 48 )
    {
      v10 = *(_QWORD *)(v7 + 24);
      v9 = *(_DWORD *)(v10 + 8);
    }
    if ( v9 == 52 )
    {
      v12 = *(_QWORD *)(v10 + 24);
      if ( get_tinfo_size(0, *(_QWORD *)(v12 + 48), 0) != v8 )
        goto LABEL_19;
      v13 = j__qalloc_or_throw(64);
      *(_QWORD *)v13 = -1;
      v14 = v13;
      *(_DWORD *)(v13 + 8) = 0;
      *(_QWORD *)(v13 + 12) = -1;
      *(_QWORD *)(v13 + 48) = 0;
      *(_DWORD *)(v13 + 56) = 0;
      sub_255C30(v13, v12);
    }
    else
    {
      tinfo_property = get_tinfo_property(*(_QWORD *)(v10 + 48), 9);
      v18 = tinfo_property;
      if ( !(_BYTE)tinfo_property || (unsigned int)verify_tinfo(tinfo_property) || get_tinfo_size(0, v18, 0) != v8 )
      {
        clear_tinfo_t(&v18);
LABEL_19:
        v3 = s1;
        v4 = 0;
        goto LABEL_4;
      }
      v14 = j__qalloc_or_throw(64);
      *(_QWORD *)v14 = -1;
      *(_OWORD *)(v14 + 24) = 0;
      *(_QWORD *)(v14 + 12) = -1;
      *(_QWORD *)(v14 + 40) = 0;
      *(_DWORD *)(v14 + 56) = 0;
      *(_DWORD *)(v14 + 8) = 69;
      v17 = v18;
      v18 = 0;
      *(_QWORD *)(v14 + 48) = v17;
      clear_tinfo_t(&v18);
    }
    v15 = *(_QWORD *)(v7 + 168);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 16);
      if ( v16 )
      {
        *(_QWORD *)(v15 + 24) = 0;
        qfree(v16);
      }
      j__qfree(v15);
    }
    *(_QWORD *)(v7 + 168) = v14;
    *(_DWORD *)(v7 + 152) = 67;
    *(_DWORD *)(v14 + 56) |= 1u;
    v3 = s1;
  }
LABEL_4:
  if ( v3 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v3);
  }
  return v4;
}
