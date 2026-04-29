__int64 __fastcall sub_3EDA80(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v6; // eax
  __int64 v7; // r9
  unsigned int v8; // ebp
  __int64 v10; // r14
  __int64 v11; // r14
  char *v12; // rax
  __int16 v13; // dx
  int v14; // r15d
  _WORD *v15; // rax
  __int16 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  _DWORD *v19; // rdi
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(_DWORD *, unsigned int); // rax
  int v22; // eax
  unsigned int v23; // esi
  int v24; // r14d
  int v25; // esi
  _BYTE *v26; // r8
  int v27; // et1
  unsigned int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  __int64 (__fastcall *v31)(_DWORD *, unsigned int); // rax
  int v32; // eax
  __int64 v33; // rax
  __int16 v34; // [rsp+Ch] [rbp-1ACh]
  __int128 v35; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v36; // [rsp+20h] [rbp-198h]
  __int64 v37; // [rsp+28h] [rbp-190h]
  __int64 v38; // [rsp+30h] [rbp-188h]
  char v39; // [rsp+38h] [rbp-180h] BYREF
  unsigned __int16 v40; // [rsp+3Eh] [rbp-17Ah]
  char v41; // [rsp+61h] [rbp-157h]
  __int16 v42; // [rsp+66h] [rbp-152h]
  char v43; // [rsp+89h] [rbp-12Fh]
  __int16 v44; // [rsp+8Eh] [rbp-12Ah]
  _QWORD v45[8]; // [rsp+178h] [rbp-40h] BYREF

  v45[0] = __readfsqword(0x28u);
  v6 = sub_1D2F40(a1, a1 + 24);
  if ( (_BYTE)v6 )
  {
    v36 = -1;
    v10 = *(unsigned __int16 *)(a1 + 50);
    v8 = v6;
    v35 = -1;
    v11 = *(_QWORD *)(a1 + 40) + v10;
    v12 = &v39;
    v37 = 0;
    v38 = 0;
    do
    {
      *(_WORD *)v12 = 0;
      v12 += 40;
      *((_WORD *)v12 - 19) = 0;
      *((_WORD *)v12 - 18) = 0;
      *((_DWORD *)v12 - 2) = 0;
      *((_WORD *)v12 - 17) = 0;
      *((_OWORD *)v12 - 2) = 0;
      *((_QWORD *)v12 - 2) = 0;
    }
    while ( v45 != (_QWORD *)v12 );
    if ( (unsigned int)decode_insn(&v35, v11, v45, 0, 0, v7, 0.0) )
    {
      v13 = *(_WORD *)(a1 + 48);
      v14 = 0;
      v15 = &unk_422680;
      if ( v13 == unk_422680 )
        goto LABEL_10;
      do
      {
        do
        {
          ++v14;
          v15 += 3;
          if ( v14 == 4 )
            return 0;
        }
        while ( v13 != *v15 );
LABEL_10:
        v16 = v15[1];
      }
      while ( (_WORD)v37 != v16 || v41 != 1 || *(_WORD *)(a1 + 110) != v42 || v43 != 1 || *(_WORD *)(a1 + 150) != v44 );
      v17 = *(_QWORD *)(a1 + 848);
      if ( *(_QWORD *)(a1 + 856) < (unsigned __int64)(v17 + 1) )
      {
        v34 = v16;
        v33 = qvector_reserve(a1 + 840, *(_QWORD *)(a1 + 840), v17 + 1, 16);
        v16 = v34;
        *(_QWORD *)(a1 + 840) = v33;
        v17 = *(_QWORD *)(a1 + 848);
      }
      v18 = *(_QWORD *)(a1 + 840) + 16 * v17;
      *(_WORD *)(v18 + 8) = 0;
      *(_QWORD *)v18 = -1;
      ++*(_QWORD *)(a1 + 848);
      *(_QWORD *)v18 = v11;
      *(_WORD *)(v18 + 8) = v16;
      v19 = *(_DWORD **)(a1 + 832);
      v20 = *(unsigned __int16 *)(a1 + 70);
      v21 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v19 + 168LL);
      if ( v21 == sub_3E59C0 )
      {
        v22 = sub_3E59C0(v19, v20);
        v23 = v40;
        v24 = v22;
      }
      else
      {
        v29 = v21(v19, v20);
        v19 = *(_DWORD **)(a1 + 832);
        v23 = v40;
        v24 = v29;
        v31 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v19 + 168LL);
        if ( v31 != sub_3E59C0 )
        {
          v32 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, __int64 (__fastcall *)(_DWORD *, unsigned int), __int64, void *))v31)(
                  v19,
                  v40,
                  sub_3E59C0,
                  v30,
                  &unk_422680);
          v26 = &unk_422680;
          v25 = v32;
          goto LABEL_20;
        }
      }
      v25 = sub_3E59C0(v19, v23);
LABEL_20:
      if ( !v26[6 * v14 + 4] )
      {
        v27 = v24;
        v24 = v25;
        v25 = v27;
      }
      sub_121860(a2, v25, v24, 4);
      v28 = *a3 & 0xFFFFFFFE;
      if ( *((_BYTE *)&unk_422680 + 6 * v14 + 5) )
        v28 = *a3 | 1;
      *a3 = v28;
      return v8;
    }
  }
  return 0;
}
