__int64 __fastcall sub_377A70(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 udm_by_tid; // r10
  char v4; // al
  unsigned int v5; // ebx
  __int64 v7; // rax
  __int64 v8; // [rsp+8h] [rbp-E0h]
  __int64 v9; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v10; // [rsp+18h] [rbp-D0h] BYREF
  __int128 v11; // [rsp+20h] [rbp-C8h] BYREF
  void *v12; // [rsp+30h] [rbp-B8h]
  __int128 v13; // [rsp+38h] [rbp-B0h]
  void *ptr; // [rsp+48h] [rbp-A0h]
  __int128 v15; // [rsp+50h] [rbp-98h]
  __int128 v16; // [rsp+60h] [rbp-88h] BYREF
  __int64 v17; // [rsp+80h] [rbp-68h]
  int v18; // [rsp+88h] [rbp-60h]
  __int64 v19; // [rsp+90h] [rbp-58h]
  char v20; // [rsp+98h] [rbp-50h]
  unsigned __int64 v21; // [rsp+A8h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a1 + 8);
  v20 = 0;
  v9 = 0;
  v12 = nullptr;
  ptr = nullptr;
  v17 = 1;
  v18 = -1;
  v11 = 0;
  v19 = 0;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  udm_by_tid = get_udm_by_tid(&v9, &v11, v2);
  v4 = *(_BYTE *)(a1 + 32);
  if ( v4 == 2 )
  {
    if ( *(_DWORD *)(a1 + 40) )
      goto LABEL_4;
LABEL_16:
    if ( udm_by_tid == -1 )
    {
      v7 = get_aflags(v2) & 0x800;
      *(_DWORD *)(a2 + 8) = (unsigned int)v7 >> 11;
      if ( (_DWORD)v7 )
        set_tinfo(v2, 0);
    }
    goto LABEL_9;
  }
  if ( v4 == 7 && *(_QWORD *)(a1 + 48) <= 1u )
    goto LABEL_16;
LABEL_4:
  v8 = udm_by_tid;
  v10 = 0;
  v5 = sub_36C270((__int64)&v10, (char *)(a1 + 32), 0);
  if ( !v5 )
  {
    if ( (_BYTE)v10 )
    {
      if ( v8 == -1 )
      {
        *(_DWORD *)(a2 + 8) = (unsigned __int8)apply_tinfo(v2);
        clear_tinfo_t(&v10);
        goto LABEL_9;
      }
      *(_DWORD *)(a2 + 8) = set_tinfo_property4(&v9, 12, v8, &v10, 0, 0) == 0;
    }
    clear_tinfo_t(&v10);
LABEL_9:
    v5 = 0;
    goto LABEL_10;
  }
  clear_tinfo_t(&v10);
LABEL_10:
  clear_tinfo_t(&v16);
  if ( ptr )
  {
    *(_QWORD *)&v15 = 0;
    qfree(ptr);
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  clear_tinfo_t(&v9);
  return v5;
}

