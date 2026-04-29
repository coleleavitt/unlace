unsigned __int64 __fastcall sub_49F20(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  const char *v7; // rsi
  const char *v8; // rdx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // r12
  int v13; // r15d
  _BYTE *v14; // r10
  _QWORD *v15; // r13
  const char *v16; // rcx
  _QWORD *v17; // rax
  _BYTE *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned int v21; // eax
  unsigned __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // r8d
  __int64 v26; // rdi
  __int64 v27; // rax
  const char *v28; // rcx
  const char *v29; // [rsp+10h] [rbp-468h] BYREF
  __int128 v30; // [rsp+18h] [rbp-460h]
  _BYTE v31[1024]; // [rsp+30h] [rbp-448h] BYREF
  _BYTE v32[8]; // [rsp+430h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp+438h] [rbp-40h]

  v4 = *(_QWORD *)a2;
  v33 = __readfsqword(0x28u);
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(v4 + 368))(a2, 7, 0, 0);
  if ( *(_QWORD *)(a1 + 440) != -1 )
    sub_48340(a2, (__int64)"MMIO Base        : 0x%0*a", 2 * *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL), a3);
  v6 = *(unsigned int *)(a1 + 460);
  switch ( *(_DWORD *)(a1 + 460) & 0xF )
  {
    case 0:
      sub_48340(a2, (__int64)"SIMD Instructions: AltiVec", v6);
      LODWORD(v6) = *(_DWORD *)(a1 + 460);
      goto LABEL_5;
    case 1:
      sub_48340(a2, (__int64)"SIMD Instructions: SPE", v6);
      if ( (*(_DWORD *)(a1 + 460) & 0x20) != 0 )
        goto LABEL_19;
      goto LABEL_6;
    case 2:
      sub_48340(a2, (__int64)"SIMD Instructions: VMX128", v6);
      if ( (*(_DWORD *)(a1 + 460) & 0x20) != 0 )
        goto LABEL_19;
      goto LABEL_6;
    case 3:
      sub_48340(a2, (__int64)"SIMD Instructions: Paired Singles", v6);
      if ( (*(_DWORD *)(a1 + 460) & 0x20) != 0 )
        goto LABEL_19;
      goto LABEL_6;
    case 4:
      sub_48340(a2, (__int64)"SIMD Instructions: LSP", v6);
      if ( (*(_DWORD *)(a1 + 460) & 0x20) != 0 )
        goto LABEL_19;
      goto LABEL_6;
    default:
LABEL_5:
      if ( (v6 & 0x20) != 0 )
      {
LABEL_19:
        v7 = "Processor Profile: Server";
        sub_48340(a2, (__int64)"Processor Profile: Server");
      }
      else
      {
LABEL_6:
        v7 = "Processor Profile: Embedded";
        sub_48340(a2, (__int64)"Processor Profile: Embedded");
      }
      v29 = nullptr;
      v30 = 0;
      if ( get_abi_name() > 0 )
      {
        v8 = s1;
        if ( (_QWORD)v30 )
          v8 = v29;
        v7 = "ABI              : %s";
        sub_48340(a2, (__int64)"ABI              : %s", v8);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 360LL))(a2);
      if ( *(_WORD *)(*(_QWORD *)(a1 + 24) + 4LL) != 1 )
        goto LABEL_12;
      if ( !*(_QWORD *)(a1 + 384) )
        goto LABEL_39;
      v13 = 0;
      v7 = nullptr;
      v14 = (_BYTE *)(&stru_3F0 + 16);
      v15 = v31;
      break;
  }
  while ( 1 )
  {
    v16 = s1;
    v17 = (_QWORD *)(*(_QWORD *)(a1 + 376) + 88LL * (_QWORD)v7);
    if ( v17[2] )
      v16 = (const char *)v17[1];
    v18 = (char *)v15 + (int)qsnprintf(v15, v14, ".set %s, %lld", v16, *v17);
    if ( (~(_BYTE)v13 & 3) == 0 )
      break;
    v7 = (const char *)++v13;
    if ( (unsigned __int64)v13 >= *(_QWORD *)(a1 + 384) )
      goto LABEL_37;
LABEL_26:
    if ( v18 == v31 )
    {
      v14 = (_BYTE *)(&stru_3F0 + 16);
      v15 = v31;
    }
    else
    {
      v15 = v18 + 1;
      *v18 = 59;
      v19 = (v18 + 1 - v31) % 20;
      if ( (_DWORD)v19 != 19 )
      {
        v20 = 18 - (int)v19;
        v21 = v20 + 1;
        if ( (unsigned int)(v20 + 1) >= 8 )
        {
          *v15 = 0x2020202020202020LL;
          v22 = (unsigned __int64)(v18 + 9) & 0xFFFFFFFFFFFFFFF8LL;
          *(_QWORD *)((char *)v15 + v21 - 8) = 0x2020202020202020LL;
          v23 = ((_DWORD)v15 - v22 + v21) & 0xFFFFFFF8;
          if ( v23 >= 8 )
          {
            v24 = v23 & 0xFFFFFFF8;
            v25 = 0;
            do
            {
              v26 = v25;
              v25 += 8;
              *(_QWORD *)(v22 + v26) = 0x2020202020202020LL;
            }
            while ( v25 < v24 );
          }
        }
        else if ( (v21 & 4) != 0 )
        {
          *(_DWORD *)v15 = 538976288;
          *(_DWORD *)((char *)v15 + v21 - 4) = 538976288;
        }
        else if ( (_DWORD)v20 != -1 )
        {
          v18[1] = 32;
          if ( (v21 & 2) != 0 )
            *(_WORD *)((char *)v15 + v21 - 2) = 8224;
        }
        v15 = (_QWORD *)((char *)v15 + v20 + 1);
      }
      v14 = (_BYTE *)(v32 - (_BYTE *)v15);
    }
  }
  (*(void (__fastcall **)(__int64, _BYTE *, _QWORD, _BYTE *))(*(_QWORD *)a2 + 136LL))(a2, v31, 0, v18);
  ++v13;
  v18 = v31;
  v7 = (const char *)v13;
  if ( (unsigned __int64)v13 < *(_QWORD *)(a1 + 384) )
    goto LABEL_26;
LABEL_37:
  if ( v18 != v31 )
  {
    v7 = v31;
    (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)a2 + 136LL))(a2, v31, 0);
  }
LABEL_39:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 160LL))(a2);
LABEL_12:
  v10 = *(unsigned int *)(a1 + 288);
  if ( (_DWORD)v10 )
  {
    if ( (unsigned int)v10 <= 9 )
    {
      v9 = 790;
      if ( _bittest64(&v9, v10) )
      {
        v11 = *(_QWORD *)(a1 + 424);
        if ( v11 != -1 )
        {
          v27 = getinf(19);
          if ( get_name_expr(&v29, v27, 0, v11, v11, 1) < 0 )
          {
            btoa64(v31, 1024, *(_QWORD *)(a1 + 424), 0);
            v28 = v31;
          }
          else
          {
            v28 = s1;
            if ( (_QWORD)v30 )
              v28 = v29;
          }
          v7 = (_BYTE *)(&stru_FFF0 + 15);
          sub_48290(a2, 0xFFFF, (__int64)&unk_68B0B, v28);
        }
      }
    }
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29, v7, v9, 0.0);
  }
  return v33 - __readfsqword(0x28u);
}
