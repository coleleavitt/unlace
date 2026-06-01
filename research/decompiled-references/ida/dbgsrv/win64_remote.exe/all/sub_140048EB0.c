/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140048EB0
// Address: 0x0000000140048EB0

//----- (0000000140048EB0) ----------------------------------------------------
__int64 __fastcall sub_140048EB0(__int64 a1)
{
  size_t v2; // r14
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  char *v6; // rcx
  size_t v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  char *v11; // rcx
  size_t v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  char *v16; // rcx
  __int64 v17; // r14
  char *v18; // rax
  char *v19; // r13
  int v20; // eax
  bool v21; // r12
  __int64 v22; // rbx
  char *v23; // rcx
  char *v24; // rsi
  const char *v26; // rbx
  int v27; // r12d
  int v28; // r15d
  int v29; // r9d
  int v30; // r10d
  __int64 i; // r8
  __int64 *v32; // rax
  void *v33; // rbx
  __int64 v34; // rsi
  __int64 v35; // r15
  size_t v36; // r15
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // rbx
  char *v40; // rcx
  __int64 v41; // rdx
  void *v42; // rax
  int v43; // ecx
  unsigned __int8 v44; // bl
  int v45; // ebx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rsi
  char v49; // [rsp+20h] [rbp-39h]
  void *Block; // [rsp+28h] [rbp-31h] BYREF
  unsigned __int64 v51; // [rsp+30h] [rbp-29h]
  unsigned __int64 v52; // [rsp+38h] [rbp-21h]
  bool v53; // [rsp+40h] [rbp-19h]
  char *Str; // [rsp+48h] [rbp-11h] BYREF
  char *v55; // [rsp+50h] [rbp-9h]
  __int64 v56; // [rsp+58h] [rbp-1h]
  _BYTE Src[5]; // [rsp+60h] [rbp+7h] BYREF
  char v58[3]; // [rsp+65h] [rbp+Ch] BYREF
  _BYTE v59[5]; // [rsp+68h] [rbp+Fh] BYREF
  char v60[3]; // [rsp+6Dh] [rbp+14h] BYREF
  _BYTE v61[5]; // [rsp+70h] [rbp+17h] BYREF
  char v62[3]; // [rsp+75h] [rbp+1Ch] BYREF
  _BYTE v63[5]; // [rsp+78h] [rbp+1Fh] BYREF
  char v64[3]; // [rsp+7Dh] [rbp+24h] BYREF

  sub_140054B30((__int64 *)&Block, 3);
  v2 = sub_14005B4D0(Src, (unsigned __int64)v58, 0x1Fu) - Src;
  if ( v2 )
  {
    v3 = v51;
    v4 = v51;
    v5 = v2 + v51;
    if ( v2 + v51 < v51 )
      v5 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v5 <= v51 )
    {
      if ( v5 != v51 )
      {
        if ( v5 < v51 )
          v3 = v5;
        v51 = v3;
      }
    }
    else
    {
      if ( v5 <= v52 )
      {
        v6 = (char *)Block;
      }
      else
      {
        v6 = (char *)sub_14005ABE0((__int64)&Block, Block, v5, 1u);
        Block = v6;
        v3 = v51;
      }
      memset(&v6[v3], 0, v5 - v3);
      v51 = v5;
    }
    memcpy((char *)Block + v4, Src, v2);
  }
  v7 = sub_14005B4D0(v59, (unsigned __int64)v60, 0) - v59;
  if ( v7 )
  {
    v8 = v51;
    v9 = v51;
    v10 = v7 + v51;
    if ( v7 + v51 < v51 )
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v10 <= v51 )
    {
      if ( v10 != v51 )
      {
        if ( v10 < v51 )
          v8 = v10;
        v51 = v8;
      }
    }
    else
    {
      if ( v10 <= v52 )
      {
        v11 = (char *)Block;
      }
      else
      {
        v11 = (char *)sub_14005ABE0((__int64)&Block, Block, v10, 1u);
        Block = v11;
        v8 = v51;
      }
      memset(&v11[v8], 0, v10 - v8);
      v51 = v10;
    }
    memcpy((char *)Block + v9, v59, v7);
  }
  v12 = sub_14005B4D0(v61, (unsigned __int64)v62, 8u) - v61;
  if ( v12 )
  {
    v13 = v51;
    v14 = v51;
    v15 = v12 + v51;
    if ( v12 + v51 < v51 )
      v15 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v15 <= v51 )
    {
      if ( v15 != v51 )
      {
        if ( v15 < v51 )
          v13 = v15;
        v51 = v13;
      }
    }
    else
    {
      if ( v15 <= v52 )
      {
        v16 = (char *)Block;
      }
      else
      {
        v16 = (char *)sub_14005ABE0((__int64)&Block, Block, v15, 1u);
        Block = v16;
        v13 = v51;
      }
      memset(&v16[v13], 0, v15 - v13);
      v51 = v15;
    }
    memcpy((char *)Block + v14, v61, v12);
  }
  v17 = a1 + 192;
  v18 = (char *)sub_140051BD0(a1 + 192, 3, (__int64 *)&Block, 0);
  v19 = v18;
  if ( v18 )
  {
    v49 = 1;
    Str = v18 + 5;
    v55 = &v18[*(unsigned int *)v18 + 5];
    v20 = sub_14005B690((unsigned __int64 *)&Str, (unsigned __int64)v55);
    v21 = v20 != 0;
    v53 = v20 != 0;
    if ( v20 )
    {
      v22 = *(_QWORD *)(a1 + 448);
      if ( *(_QWORD *)(v22 + 120) > 1u )
      {
        v23 = Str;
        v24 = Str;
        while ( v23 < v55 )
        {
          if ( !*v23++ )
          {
            Str = v23;
            goto LABEL_49;
          }
        }
        v24 = nullptr;
LABEL_49:
        if ( *(_QWORD *)(v22 + 120) )
          v26 = *(const char **)(v22 + 112);
        else
          v26 = Str1;
        if ( !v24 )
          goto LABEL_58;
        v27 = strlen(v24);
        v28 = strlen(v26);
        v29 = v27 ^ v28;
        if ( v28 )
        {
          v30 = 0;
          if ( v27 > 0 )
          {
            for ( i = 0; i < v27; ++i )
            {
              v29 |= v24[i] ^ v26[v30 % v28];
              ++v30;
            }
          }
        }
        if ( !v29 )
        {
          v21 = v53;
        }
        else
        {
LABEL_58:
          sub_1400497B0(a1, "[%d] Bad password\n", *(_DWORD *)(a1 + 168));
          v21 = 0;
        }
      }
    }
    else
    {
      sub_1400497B0(a1, "[%d] Incompatible IDA version\n", *(_DWORD *)(a1 + 168));
      v49 = 0;
    }
    *(_BYTE *)(a1 + 261) = v21;
    j_free(v19);
    if ( v49 )
    {
      v32 = sub_140054B30((__int64 *)&Str, 0);
      v33 = (void *)*v32;
      *v32 = 0;
      v34 = v32[1];
      v32[1] = 0;
      v35 = v32[2];
      v32[2] = 0;
      if ( Block )
      {
        v51 = 0;
        j_free(Block);
      }
      Block = v33;
      v51 = v34;
      v52 = v35;
      if ( Str )
      {
        v55 = nullptr;
        j_free(Str);
      }
      v36 = sub_14005B4D0(v63, (unsigned __int64)v64, v21) - v63;
      if ( v36 )
      {
        v37 = v51;
        v38 = v51;
        v39 = v51 + v36;
        if ( v51 + v36 < v51 )
          v39 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v39 <= v51 )
        {
          if ( v39 != v51 )
          {
            if ( v39 < v51 )
              v37 = v39;
            v51 = v37;
          }
        }
        else
        {
          if ( v39 <= v52 )
          {
            v40 = (char *)Block;
          }
          else
          {
            v40 = (char *)sub_14005ABE0((__int64)&Block, Block, v39, 1u);
            Block = v40;
            v37 = v51;
          }
          memset(&v40[v37], 0, v39 - v37);
          v51 = v39;
        }
        memcpy((char *)Block + v38, v63, v36);
      }
      sub_140052B90(a1 + 192, (__int64 *)&Block);
      *(_DWORD *)(a1 + 256) = -1;
      *(_BYTE *)(a1 + 261) = 1;
      if ( v21 )
      {
        Str = nullptr;
        v55 = nullptr;
        v56 = 0;
        LOBYTE(v41) = 3;
        v42 = (void *)(*(__int64 (__fastcall **)(__int64, __int64, char **))(*(_QWORD *)v17 + 8LL))(a1 + 192, v41, &Str);
        if ( v42 )
          j_free(v42);
        if ( Str )
        {
          v55 = nullptr;
          j_free(Str);
        }
      }
    }
  }
  else
  {
    sub_1400497B0(a1, "[%d] Could not establish the connection\n", *(_DWORD *)(a1 + 168));
  }
  *(_BYTE *)(a1 + 200) = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(a1 + 192) )
    goto LABEL_98;
  sub_1400497B0(
    a1,
    "[%d] Broken connection (mode=%d)\n",
    *(_DWORD *)(a1 + 168),
    *(_DWORD *)(*(_QWORD *)(a1 + 448) + 140LL));
  v43 = *(_DWORD *)(*(_QWORD *)(a1 + 448) + 140LL);
  if ( v43 != 1 )
  {
    if ( v43 == 2 )
    {
      v45 = *(_DWORD *)(*(_QWORD *)(a1 + 440) + 488LL);
      sub_1400497B0(a1, "[%d] Debugged process PID: %d\n", *(_DWORD *)(a1 + 168), v45);
      if ( v45 > 0 )
      {
        sub_1400497B0(
          a1,
          "[%d] Killing debugged process %d\n",
          *(_DWORD *)(a1 + 168),
          *(_DWORD *)(*(_QWORD *)(a1 + 440) + 488LL));
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 440) + 152LL))(*(_QWORD *)(a1 + 440), 0);
        v46 = sub_14005A7C0();
        v47 = (int)v46 | ((unsigned __int64)(unsigned int)(HIDWORD(v46) + 5) << 32);
        if ( sub_14005A7C0() >= v47 )
        {
LABEL_97:
          sub_1400497B0(a1, "[%d] Failed to kill process after %d seconds. Giving up\n", *(_DWORD *)(a1 + 168), 5);
        }
        else
        {
          while ( 1 )
          {
            if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 440) + 128LL))(
                   *(_QWORD *)(a1 + 440),
                   a1 + 296,
                   100) >= 1 )
            {
              (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 440) + 160LL))(
                *(_QWORD *)(a1 + 440),
                a1 + 296);
              if ( (*(_DWORD *)(a1 + 316) & 0xFFFFFFF) == 2 )
                break;
            }
            if ( sub_14005A7C0() >= v47 )
              goto LABEL_97;
          }
        }
      }
    }
LABEL_98:
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 104LL))(*(_QWORD *)(a1 + 440));
    sub_1400549F0(a1);
    v44 = 1;
    goto LABEL_99;
  }
  sub_1400549F0(a1);
  sub_1400497B0(a1, "[%d] Debugged session entered into sleeping mode\n", *(_DWORD *)(a1 + 168));
  if ( byte_1400CB120
    && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 496LL))(*(_QWORD *)(a1 + 440)) )
  {
    sub_140048740(
      (_BYTE *)(a1 + 192),
      (struct __crt_locale_pointers *)"Error preparing debugger server to handle a broken connection\n");
  }
  v44 = 0;
LABEL_99:
  if ( Block )
  {
    v51 = 0;
    j_free(Block);
  }
  return v44;
}
// 140049343: variable 'v41' is possibly undefined
// 1400CB120: using guessed type char byte_1400CB120;
