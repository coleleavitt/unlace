__int64 __fastcall sub_6317E0(__int64 *a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r12
  int v9; // edx
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rax
  const char *v14; // rsi
  void *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // edx
  char v19; // dl
  __int64 v20; // rsi
  void *v21; // [rsp+8h] [rbp-50h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v23; // [rsp+18h] [rbp-40h]
  unsigned __int64 v24; // [rsp+28h] [rbp-30h]

  v6 = a1;
  v24 = __readfsqword(0x28u);
  v9 = *(_DWORD *)(a2 + 56);
  if ( (v9 & 0x4000) == 0 )
  {
    if ( (v9 & 0x4070) != 0 )
    {
      v10 = 0;
      goto LABEL_4;
    }
    if ( (v9 & 0xF) == 0 )
    {
      v10 = sub_6301E0((__int64)a1, a2);
      if ( *(_QWORD *)(a2 + 8) != 268 )
        goto LABEL_5;
LABEL_28:
      v19 = sub_6301E0((__int64)v6, (__int64)&unk_2B35BA0);
      if ( (v19 & 0xF0) != 0xC0 )
        return v19 & 0xF0;
      return v10;
    }
    v14 = *(const char **)(a2 + 48);
    if ( v14 )
    {
      a1 = (__int64 *)*a1;
      v15 = sub_62A340((__int64)a1, v14, 0);
      v9 = *(_DWORD *)(a2 + 56);
    }
    else
    {
      v15 = (void *)a1[1];
    }
    v21 = v15;
    if ( (v9 & 4) != 0 )
    {
      v20 = *v6;
      ptr = nullptr;
      v10 = -1;
      if ( sub_7BF1C0(&v21, v20, &ptr, 8) > 0 )
        v10 = (__int64)ptr;
    }
    else
    {
      v16 = *(unsigned __int8 *)(a2 + 32);
      if ( (v9 & 0x800) != 0 )
      {
        v10 = sub_7BF490(&v21, *v6, *(_QWORD *)(a2 + 8), v16);
      }
      else
      {
        v17 = v9 & 0xF;
        if ( *(_QWORD *)(a2 + 16) != 1 )
        {
          if ( (_DWORD)v17 )
          {
            v10 = sub_7BE710(&v21, *v6, *(_QWORD *)(a2 + 8), v16);
            goto LABEL_4;
          }
LABEL_38:
          sub_629950(a1, v14, v17, v16, a5, a6);
        }
        if ( !(_DWORD)v17 )
          goto LABEL_38;
        BYTE1(v16) = 16;
        v10 = (unsigned __int8)sub_7BE710(&v21, *v6, *(_QWORD *)(a2 + 8), v16);
      }
    }
LABEL_4:
    if ( *(_QWORD *)(a2 + 8) != 268 )
    {
LABEL_5:
      v11 = *(_QWORD *)(a2 + 16);
      if ( (unsigned __int64)(v11 - 1) <= 6 )
        v10 &= ~(-1LL << (8 * (unsigned __int8)v11));
      v10 = ((*(_DWORD *)(a2 + 56) & 0x200) == 0) + v10 - 1;
      if ( (*(_DWORD *)(a2 + 56) & 0x400) != 0 )
        v10 = node2ea(v10);
      if ( a3 )
      {
        v12 = *(_QWORD *)(a2 + 24);
        if ( v12 )
        {
          v10 &= v12;
          if ( (*(_BYTE *)(a2 + 57) & 0x40) != 0 || (v12 & (v12 - 1)) == 0 )
            return v10 != 0;
        }
        else if ( (*(_BYTE *)(a2 + 57) & 0x40) != 0 )
        {
          return *(_QWORD *)(a2 + 24);
        }
      }
      return v10;
    }
    goto LABEL_28;
  }
  ptr = nullptr;
  v23 = 0;
  sub_631050(a1, a2, &ptr, a4, a5);
  v18 = *((unsigned __int8 *)ptr + (*(_QWORD *)(a2 + 24) >> 3));
  v10 = _bittest(&v18, *(_DWORD *)(a2 + 24) & 7);
  if ( ptr )
  {
    *(_QWORD *)&v23 = 0;
    qfree(ptr);
  }
  return v10;
}
