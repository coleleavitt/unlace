__int64 __fastcall sub_22550(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v6; // rbx
  unsigned __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 *v17; // r12
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  char byte; // al
  int v22; // r14d
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned __int64 v27; // r15
  unsigned int dword; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  unsigned int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int16 v35; // si
  int custom_fixup; // r9d
  int v37; // r9d
  int v39; // eax
  __int64 v40; // [rsp+0h] [rbp-98h]
  int v41; // [rsp+10h] [rbp-88h]
  int v42; // [rsp+14h] [rbp-84h]
  unsigned int v44; // [rsp+20h] [rbp-78h]
  unsigned int v45; // [rsp+20h] [rbp-78h]
  __int64 v46; // [rsp+28h] [rbp-70h]
  __int64 v47; // [rsp+30h] [rbp-68h]
  __int64 v48; // [rsp+40h] [rbp-58h] BYREF
  __int128 v49; // [rsp+48h] [rbp-50h]
  unsigned __int64 v50; // [rsp+58h] [rbp-40h]

  v3 = a2[1];
  v4 = *a2;
  v50 = __readfsqword(0x28u);
  v40 = v3;
  v42 = 0;
  v41 = 0;
  while ( 1 )
  {
    v49 = 0;
    v48 = 0;
    v48 = qvector_reserve(&v48, 0, 1, 80);
    v6 = v48 + 80 * v49;
    *(_OWORD *)(v6 + 8) = 0;
    *(_QWORD *)v6 = 0;
    *(_QWORD *)&v49 = v49 + 1;
    v7 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)(v6 + 24) = 0;
    *(_QWORD *)(v6 + 48) = 0;
    *(_DWORD *)(v6 + 72) = -1;
    *(_OWORD *)(v6 + 32) = 0;
    v8 = v7 + 3;
    *(_OWORD *)(v6 + 56) = 0;
    if ( v7 >= 0xFFFFFFFFFFFFFFFDLL )
    {
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v9 = qvector_reserve(v6, *(_QWORD *)v6, v7 + 3, 1);
      v10 = *(_QWORD *)(v6 + 8);
      *(_QWORD *)v6 = v9;
      memset((void *)(v9 + v10), 0, v7 + 3 - v10);
    }
    v11 = *(_QWORD *)v6;
    *(_QWORD *)(v6 + 8) = v8;
    *(_WORD *)(v11 + v7) = 64;
    *(_BYTE *)(v11 + v7 + 2) = 0;
    v12 = bin_search(v4, v40, &v48, 2, 0);
    v13 = v48;
    v14 = v12;
    if ( v48 )
    {
      v15 = v49;
      if ( (_QWORD)v49 )
      {
        v16 = 0;
        do
        {
          v17 = (__int64 *)(v13 + 80 * v16);
          v18 = v17[6];
          if ( v18 )
          {
            v17[7] = 0;
            qfree(v18);
          }
          v19 = v17[3];
          if ( v19 )
          {
            v17[4] = 0;
            qfree(v19);
          }
          v20 = *v17;
          if ( *v17 )
          {
            v17[1] = 0;
            qfree(v20);
          }
          ++v16;
          v13 = v48;
        }
        while ( v15 != v16 );
      }
      *(_QWORD *)&v49 = 0;
      qfree(v13);
    }
    if ( v14 == -1 )
      return v41;
    v4 = v14 + 20;
    byte = get_byte(v14 + 3);
    if ( byte == 2 )
    {
      v22 = 0;
      goto LABEL_18;
    }
    v22 = 4;
    if ( byte == 3 )
    {
LABEL_18:
      v23 = *(_QWORD *)(a3 + 8);
      v27 = sub_4A750(a3 + 16, v23, 0);
      if ( v27 )
      {
        dword = get_dword(v14 + 4, v23, v24, v25, v26);
        v31 = dword;
        if ( (dword & 0xFFC00000) == 0x2F000000 )
        {
          if ( !v22
            || (v45 = dword, v39 = get_dword(v14 + 8, v23, v29, dword, v30), v31 = v45, (v39 & 0xFFC00000) == 0x2F000000) )
          {
            v44 = v31;
            v47 = v14 + v22;
            v46 = v47 + 8;
            v32 = get_dword(v47 + 8, v23, v29, v31, v30);
            v35 = v32;
            if ( (v32 & 0xFFFFFC00) == 0xAE15E000 )
            {
              if ( ++v42 )
              {
                if ( (unsigned int)get_dword(v47 + 12, v32, v33, v44, v34) == -1375354865
                  && v14 + (int)(v35 & 0x3FF | (v44 << 10)) == v27 )
                {
                  put_dword(v14, 0x1000000);
                  put_dword(v14 + 4, 0x1000000);
                  if ( v22 )
                    put_dword(v14 + 8, 0x1000000);
                  custom_fixup = *(unsigned __int16 *)(a1 + 348);
                  if ( (_WORD)custom_fixup == 0x8000 )
                  {
                    custom_fixup = (unsigned __int16)find_custom_fixup("HI22");
                    *(_WORD *)(a1 + 348) = custom_fixup;
                  }
                  sub_42050(a1, v46, v27, (v27 >> 10) | 0x2F000000, 0, custom_fixup, 0, 8, 0);
                  v37 = *(unsigned __int16 *)(a1 + 350);
                  if ( (_WORD)v37 == 0x8000 )
                  {
                    v37 = (unsigned __int16)find_custom_fixup("LO10");
                    *(_WORD *)(a1 + 350) = v37;
                  }
                  sub_42050(a1, v47 + 12, v27, v27 & 0x3FF | 0xAE15E000, 0, v37, 0, 8, 0);
                  sub_40E20(a1, v46, 0);
                  ++v41;
                }
              }
            }
          }
        }
      }
    }
  }
}

