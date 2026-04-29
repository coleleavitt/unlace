__int64 __fastcall sub_D4680(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v10; // ecx
  unsigned int v11; // eax
  _DWORD *v12; // r14
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // r12
  _QWORD *v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // rdi
  unsigned int v23; // ecx
  _DWORD *v24; // rdi
  int v25; // r8d
  _DWORD *v26; // rdx
  __int64 v27; // rax
  int v28; // esi
  int v29; // ecx
  _DWORD *v30; // rax
  bool v31; // zf
  _DWORD *v32; // rax
  bool v33; // al
  _DWORD *v34; // rax
  _DWORD *v35; // rbp
  _DWORD *v36; // r11
  bool v37; // al
  _DWORD *v38; // rax
  _DWORD *v39; // rdx
  __int64 v41[2]; // [rsp+20h] [rbp-F8h] BYREF
  _DWORD *v42; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v43; // [rsp+38h] [rbp-E0h]
  __int64 v44; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v45; // [rsp+58h] [rbp-C0h]
  __int64 v46; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v47; // [rsp+78h] [rbp-A0h]
  __int64 v48; // [rsp+88h] [rbp-90h]
  __int64 v49; // [rsp+90h] [rbp-88h] BYREF
  __int64 v50; // [rsp+98h] [rbp-80h] BYREF
  __int128 v51; // [rsp+A0h] [rbp-78h]
  __int64 v52; // [rsp+B0h] [rbp-68h]
  __int128 v53; // [rsp+B8h] [rbp-60h]
  char v54; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v55; // [rsp+D8h] [rbp-40h]

  v4 = 1;
  v5 = *(_DWORD *)(a1 + 72);
  v55 = __readfsqword(0x28u);
  if ( (unsigned int)(v5 - 208) <= 0x2F )
    return v4;
  v46 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v52 = 0;
  v47 = 0;
  v51 = 0;
  v53 = 0;
  if ( (v5 & 0xFFFFFF0F) != 0 || v5 == 192 )
  {
    HIDWORD(v48) = v5;
    LOBYTE(v5) = -64;
  }
  v10 = *(_DWORD *)(a3 + 88);
  v54 = v5;
  v42 = nullptr;
  v43 = 0;
  v11 = sub_D2BA0(a1, (__int64 *)&v42, (__int64 *)a3, v10, 0);
  v12 = v42;
  v4 = v11;
  if ( (_BYTE)v11 )
  {
    v13 = v43;
    if ( (_QWORD)v43 )
    {
      if ( (unsigned int)(*(_DWORD *)a1 - 5) <= 1 && (get_tinfo_property(*a4, 2) & 0xF) == 9 )
      {
        v38 = *(_DWORD **)(a1 + 88);
        v39 = &v38[*(_QWORD *)(a1 + 96)];
        if ( v38 != v39 )
        {
          while ( *v12 != *v38 )
          {
            if ( v39 == ++v38 )
              goto LABEL_9;
          }
          if ( v38 != v39 )
            goto LABEL_13;
        }
      }
    }
LABEL_9:
    v44 = 1;
    copy_tinfo_t(&v49, &v44);
    clear_tinfo_t(&v44);
    v14 = v47;
    v15 = v46;
    if ( *((_QWORD *)&v47 + 1) < (unsigned __int64)(v47 + 1) )
    {
      v46 = qvector_reserve(&v46, v46, v47 + 1, 80);
      v15 = v46;
      v14 = v47;
    }
    v16 = v15 + 80 * v14;
    *(_DWORD *)v16 = 0;
    *(_QWORD *)(v16 + 8) = 0;
    *(_QWORD *)(v16 + 16) = 0;
    *(_QWORD *)(v16 + 40) = 0;
    *(_QWORD *)(v16 + 64) = 0;
    *(_DWORD *)(v16 + 72) = 0;
    *(_OWORD *)(v16 + 24) = 0;
    *(_OWORD *)(v16 + 48) = 0;
    *(_QWORD *)&v47 = v47 + 1;
    copy_tinfo_t(v16 + 64, a4);
    if ( (unsigned __int8)calc_arglocs(&v46) )
    {
      sub_1C6010(v41, a2, v16, *(unsigned int *)(a3 + 88));
      v23 = *(_DWORD *)(a3 + 88);
      v45 = 0;
      v44 = 0;
      v4 = sub_D2BA0(a1, &v44, v41, v23, 0);
      if ( (_BYTE)v4 )
      {
        if ( (unsigned __int64)v45 < v13 )
        {
LABEL_62:
          v4 = 0;
          goto LABEL_49;
        }
        if ( v13 )
        {
          v24 = *(_DWORD **)(a1 + 88);
          v25 = 0;
          v26 = &v24[*(_QWORD *)(a1 + 96)];
          v27 = 0;
          do
          {
            v28 = v12[v27];
            v29 = *(_DWORD *)(v44 + 4 * v27);
            if ( v24 != v26 )
            {
              v30 = *(_DWORD **)(a1 + 88);
              do
              {
                if ( v28 == *v30 )
                  break;
                ++v30;
              }
              while ( v26 != v30 );
              v31 = v30 == v26;
              v32 = *(_DWORD **)(a1 + 88);
              do
              {
                if ( *v32 == v29 )
                {
                  v33 = v32 != v26;
                  goto LABEL_38;
                }
                ++v32;
              }
              while ( v32 != v26 );
              v33 = 0;
LABEL_38:
              if ( v33 != !v31 )
                goto LABEL_62;
            }
            v34 = *(_DWORD **)(a1 + 112);
            v35 = &v34[*(_QWORD *)(a1 + 120)];
            if ( v34 != v35 )
            {
              v36 = *(_DWORD **)(a1 + 112);
              do
              {
                if ( v28 == *v36 )
                  break;
                ++v36;
              }
              while ( v35 != v36 );
              do
              {
                if ( *v34 == v29 )
                {
                  v37 = v34 != v35;
                  goto LABEL_47;
                }
                ++v34;
              }
              while ( v34 != v35 );
              v37 = 0;
LABEL_47:
              if ( v37 != (v36 != v35) )
                goto LABEL_62;
            }
            v27 = ++v25;
          }
          while ( v25 < v13 );
        }
      }
LABEL_49:
      if ( v44 )
        qfree(v44);
      cleanup_argloc(v41);
      goto LABEL_13;
    }
  }
  v4 = 0;
LABEL_13:
  if ( v12 )
    qfree(v12);
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree(v52);
  }
  cleanup_argloc(&v50);
  clear_tinfo_t(&v49);
  v17 = v46;
  if ( v46 )
  {
    v18 = v47;
    if ( (_QWORD)v47 )
    {
      v19 = 0;
      do
      {
        v20 = (_QWORD *)(v17 + 80 * v19);
        clear_tinfo_t(v20 + 8);
        v21 = v20[5];
        if ( v21 )
        {
          v20[6] = 0;
          qfree(v21);
        }
        v22 = v20[2];
        if ( v22 )
        {
          v20[3] = 0;
          qfree(v22);
        }
        ++v19;
        cleanup_argloc(v20);
        v17 = v46;
      }
      while ( v18 != v19 );
    }
    *(_QWORD *)&v47 = 0;
    qfree(v17);
  }
  return v4;
}
