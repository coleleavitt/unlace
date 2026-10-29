__int64 __fastcall sub_651240(__int64 *a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // r12
  char *v6; // r13
  unsigned int v7; // r14d
  __int64 v8; // r8
  __int64 v9; // rax
  char *v10; // r13
  __int64 v11; // rcx
  const char *v12; // r8
  char *v14; // rax
  const char *v15; // r13
  size_t v16; // rax
  __int64 v17; // [rsp+8h] [rbp-70h]
  size_t v18; // [rsp+8h] [rbp-70h]
  size_t n; // [rsp+10h] [rbp-68h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v21; // [rsp+28h] [rbp-50h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v4 = *(_QWORD *)(a2 + 64);
  if ( !v4 || (*(_BYTE *)(v4 + 8) & 2) == 0 || a3 >= *(_DWORD *)(v4 + 48) )
    return 0;
  v6 = *(char **)(v4 + 40);
  LOBYTE(v7) = a4;
  if ( !v6 )
    v6 = (char *)sub_64AEC0(v4, 0);
  v8 = a3;
  v9 = 4LL * a3;
  v10 = &v6[v9];
  if ( *(_DWORD *)v10 == -1 )
    return 0;
  ptr = nullptr;
  v21 = 0;
  v11 = *(unsigned int *)v10;
  if ( !(_BYTE)v7 )
  {
    if ( (int)v11 < 0 )
    {
      v14 = (char *)(*(_QWORD *)(v4 + 40) + v9);
      LODWORD(v11) = *(_DWORD *)v14;
      v10 = v14;
      goto LABEL_10;
    }
    v15 = (const char *)(*(_QWORD *)(v4 + 32) + v11 + 4);
    v16 = strlen(v15);
    v8 = a3;
    if ( v16 )
    {
      n = v16;
      v18 = v16 + 1;
      ptr = (void *)qvector_reserve(&ptr, 0, v16 + 1, 1);
      *(_QWORD *)&v21 = v18;
      memmove(ptr, v15, n);
      v8 = a3;
      *((_BYTE *)ptr + n) = 0;
    }
    LODWORD(v11) = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 4 * v8);
    if ( (_DWORD)v11 == -1 )
    {
      v7 = 0;
      goto LABEL_11;
    }
LABEL_23:
    v7 = (unsigned __int8)v7;
    v17 = v8;
    sub_6507E0(a1, (_QWORD *)v4, *(_QWORD *)(v4 + 32) + (unsigned int)v11, v7);
    *(_DWORD *)(*(_QWORD *)(v4 + 40) + 4 * v17) = -1;
    goto LABEL_11;
  }
  if ( (int)v11 >= 0 )
    goto LABEL_23;
LABEL_10:
  sub_64A0C0(*a1, (__int64 *)v4, a3, v11, -1);
  *(_DWORD *)v10 = -1;
  v7 = (unsigned __int8)v7;
LABEL_11:
  *(_DWORD *)(a2 + 32) |= 0x40u;
  v12 = nullptr;
  if ( (unsigned __int64)v21 > 1 )
    v12 = (const char *)ptr;
  sub_6511B0(*a1, 2u, v7, a3, v12);
  if ( ptr )
  {
    *(_QWORD *)&v21 = 0;
    qfree(ptr);
  }
  return 1;
}
