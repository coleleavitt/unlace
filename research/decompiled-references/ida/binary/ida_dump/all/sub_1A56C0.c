__int64 __fastcall sub_1A56C0(__int64 a1, char a2, char a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // r14
  int v8; // r12d
  int v9; // r13d
  char v10; // dl
  char v11; // al
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int tinfo_size; // eax
  _DWORD *v17; // r8
  _DWORD *v18; // r11
  __int64 v19; // rdx
  int v20; // ebx
  __int64 v21; // rsi
  _DWORD *v22; // rsi
  _DWORD *v23; // rcx
  _DWORD *v24; // rax
  __int64 v25; // rax
  int v26; // esi
  _DWORD *v27; // rsi
  _DWORD *v28; // rcx
  _DWORD *v29; // rax
  __int64 v30; // rax
  _DWORD *v31; // [rsp+0h] [rbp-A8h]
  _DWORD *v32; // [rsp+8h] [rbp-A0h]
  __int64 v33; // [rsp+10h] [rbp-98h]
  __int64 v36; // [rsp+30h] [rbp-78h] BYREF
  __int128 v37; // [rsp+38h] [rbp-70h]
  _DWORD *v38; // [rsp+50h] [rbp-58h] BYREF
  __int128 v39; // [rsp+58h] [rbp-50h]
  unsigned __int64 v40; // [rsp+68h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 280);
  v4 = *(unsigned __int8 *)(v3 + 320);
  if ( (_BYTE)v4 )
    LOBYTE(v4) = (unsigned int)(*(_DWORD *)(v3 + 72) - 208) <= 0x2F;
  v36 = 0;
  v37 = 0;
  sub_199260(a1, 0x40u);
  v5 = *(_QWORD *)(a1 + 280);
  v6 = *(_QWORD *)(v5 + 432);
  v33 = v6 + 104LL * *(_QWORD *)(v5 + 440);
  if ( v33 == v6 )
  {
    v8 = -1;
    v9 = -1;
    goto LABEL_9;
  }
  v7 = *(_QWORD *)(v5 + 432);
  v8 = -1;
  v9 = -1;
  do
  {
    if ( a3 )
    {
      while ( (*(_BYTE *)(v7 + 25) & 1) == 0 )
      {
        v7 += 104;
        if ( v33 == v7 )
          goto LABEL_8;
      }
    }
    else
    {
      while ( !(unsigned __int8)sub_228C90(*(_QWORD *)(a1 + 280), v7) )
      {
        v7 += 104;
        if ( v33 == v7 )
          goto LABEL_8;
      }
    }
    v38 = nullptr;
    v39 = 0;
    tinfo_size = get_tinfo_size();
    sub_D2BA0(a1 + 8, (__int64 *)&v38, (_DWORD *)v7, tinfo_size, 0);
    v17 = v38;
    v18 = &v38[v39];
    if ( v18 == v38 )
      goto LABEL_48;
    v19 = v37;
    do
    {
      v20 = *v17;
      v21 = v36;
      if ( *((_QWORD *)&v37 + 1) < (unsigned __int64)(v19 + 1) )
      {
        v31 = v18;
        v32 = v17;
        v36 = qvector_reserve();
        v19 = v37;
        v21 = v36;
        v17 = v32;
        v18 = v31;
      }
      *(_DWORD *)(v21 + 4 * v19) = v20;
      v19 = v37 + 1;
      *(_QWORD *)&v37 = v37 + 1;
      if ( !(_BYTE)v4 )
      {
        v22 = *(_DWORD **)(a1 + 96);
        v23 = &v22[*(_QWORD *)(a1 + 104)];
        if ( v22 != v23 )
        {
          v24 = *(_DWORD **)(a1 + 96);
          while ( v20 != *v24 )
          {
            if ( v23 == ++v24 )
              goto LABEL_52;
          }
          if ( v23 != v24 )
          {
            v25 = v24 - v22;
            v26 = v25;
            if ( (_DWORD)v25 != -1 )
            {
              if ( *(_DWORD *)(a1 + 8) != 3 )
                LODWORD(v25) = -1;
LABEL_42:
              if ( v9 < v26 )
                v9 = v26;
              if ( v8 < (int)v25 )
                v8 = v25;
              goto LABEL_46;
            }
          }
        }
LABEL_52:
        v27 = *(_DWORD **)(a1 + 120);
        v28 = &v27[*(_QWORD *)(a1 + 128)];
        if ( v27 != v28 )
        {
          v29 = *(_DWORD **)(a1 + 120);
          while ( v20 != *v29 )
          {
            if ( v28 == ++v29 )
              goto LABEL_61;
          }
          if ( v28 != v29 )
          {
            v25 = v29 - v27;
            if ( (_DWORD)v25 != -1 )
            {
              v26 = -1;
              if ( *(_DWORD *)(a1 + 8) == 3 )
                v26 = v25;
              goto LABEL_42;
            }
          }
        }
LABEL_61:
        v30 = *(_QWORD *)(a1 + 280);
        if ( !*(_BYTE *)(v30 + 320) )
          v4 = (*(_BYTE *)(*(_QWORD *)(v30 + 1496) + 606LL) & 0x10) == 0;
      }
LABEL_46:
      ++v17;
    }
    while ( v18 != v17 );
    v17 = v38;
LABEL_48:
    if ( v17 )
    {
      *(_QWORD *)&v39 = 0;
      qfree();
    }
    v7 += 104;
  }
  while ( v33 != v7 );
LABEL_8:
  v5 = *(_QWORD *)(a1 + 280);
LABEL_9:
  if ( *(_BYTE *)(v5 + 320) && (unsigned int)(*(_DWORD *)(v5 + 72) - 208) <= 0x2F != (_BYTE)v4 )
  {
    if ( !under_debugger )
      sub_383060(52052);
    BUG();
  }
  if ( a2 && (_BYTE)v4 )
  {
    *(_BYTE *)(a1 + 288) &= ~2u;
    sub_D1290(a1 + 8, (__int64)&v36, 208);
    v10 = *(_BYTE *)(a1 + 288);
    if ( (v10 & 1) == 0 )
    {
      v5 = *(_QWORD *)(a1 + 280);
      goto LABEL_23;
    }
  }
  else
  {
    v10 = *(_BYTE *)(a1 + 288);
    if ( (v10 & 1) == 0 )
    {
      if ( !(_BYTE)v4 )
      {
        v11 = getinf_flag();
        v12 = v8 + 1;
        if ( v11 )
          sub_1A5590(a1, v9 + 1, v12);
        else
          sub_1A5590(a1, *(_DWORD *)(a1 + 24), v12);
        v5 = *(_QWORD *)(a1 + 280);
        v10 = *(_BYTE *)(a1 + 288);
      }
LABEL_23:
      v13 = *(_QWORD *)(v5 + 1504);
      v14 = a1 + 8;
      if ( (v10 & 2) != 0 )
        v14 = a1 + 144;
      *(_DWORD *)(a1 + 352) = *(_DWORD *)(v13 + 80) * *(_QWORD *)(v14 + 96);
    }
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  return v4;
}
