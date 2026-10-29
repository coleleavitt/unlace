void __fastcall sub_17132B0(char ***a1, const char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  bool v21; // zf
  char v22; // al
  char **v23; // rdi
  char *v24; // rax
  void *v25[2]; // [rsp+0h] [rbp-68h] BYREF
  _BYTE v26[16]; // [rsp+10h] [rbp-58h] BYREF
  void **v27; // [rsp+20h] [rbp-48h] BYREF
  __int16 v28; // [rsp+40h] [rbp-28h]

  v6 = *((_QWORD *)a2 + 6) & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)v6;
  if ( *(_BYTE *)(*(_QWORD *)v6 + 16LL) == 26
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
    && (v7 = sub_F63050(v7, a2, a3, a4)) != 0 )
  {
    if ( sub_A5DBE0(v7, (__int64)a2, a3, a4, a5) )
    {
      if ( sub_A5DBE0(v7, (__int64)a2, v8, v9, v10) == 1 )
      {
        sub_15A30F0((__int64)a1, (__int64)" const");
        return;
      }
      if ( sub_A5DBE0(v7, (__int64)a2, v11, v12, v13) == 4 )
      {
        sub_15A30F0((__int64)a1, (__int64)" volatile");
        return;
      }
      if ( sub_A5DBE0(v7, (__int64)a2, v14, v15, v16) == 2 )
      {
        sub_15A30F0((__int64)a1, (__int64)" restrict");
        return;
      }
      v26[0] = 0;
      v21 = *(_BYTE *)(v7 + 16) == 26;
      v25[1] = nullptr;
      v25[0] = v26;
      if ( (v21 || sub_16FF100(v7, (__int64)a2, v17, v18)) && (*(_BYTE *)(v7 + 18) & 0x20) != 0 )
      {
        a2 = " const";
        sub_9EE7C0(v25, " const");
      }
      if ( *(_BYTE *)(v7 + 16) == 26 )
      {
        v22 = *(_BYTE *)(v7 + 18) >> 5;
        if ( (v22 & 4) == 0 )
          goto LABEL_12;
      }
      else if ( !sub_16FF100(v7, (__int64)a2, v17, v18) || *(char *)(v7 + 18) >= 0 )
      {
        goto LABEL_22;
      }
      a2 = " volatile";
      sub_9EE7C0(v25, " volatile");
LABEL_22:
      if ( *(_BYTE *)(v7 + 16) != 26 && !sub_16FF100(v7, (__int64)a2, v17, v18) )
      {
LABEL_14:
        v23 = *a1;
        v27 = v25;
        v28 = 260;
        v24 = sub_15A4EB0(v23, (const void ***)&v27, v17, v18, v19, v20);
        sub_15A30F0((__int64)a1, (__int64)v24);
        if ( v25[0] != v26 )
          operator delete(v25[0]);
        return;
      }
      v22 = *(_BYTE *)(v7 + 18) >> 5;
LABEL_12:
      if ( (v22 & 2) != 0 )
        sub_9EE7C0(v25, " restrict");
      goto LABEL_14;
    }
  }
}
