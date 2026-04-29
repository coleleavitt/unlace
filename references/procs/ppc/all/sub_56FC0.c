__int64 __fastcall sub_56FC0(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, int a5)
{
  char *v6; // rax
  unsigned __int64 v7; // rdx
  int v9; // ebp
  unsigned int v10; // edx
  unsigned int v12; // eax
  __int64 v13; // r12
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int16 v22; // r12
  int v23; // eax
  __int64 v24; // rbx
  __int16 v25; // r12
  int v26; // eax
  unsigned __int8 v28; // [rsp+0h] [rbp-328h]
  unsigned __int8 v29; // [rsp+0h] [rbp-328h]
  unsigned __int8 v30; // [rsp+Fh] [rbp-319h]
  unsigned __int8 v31; // [rsp+Fh] [rbp-319h]
  _BYTE v32[360]; // [rsp+10h] [rbp-318h] BYREF
  char v33; // [rsp+178h] [rbp-1B0h] BYREF
  _BYTE v34[360]; // [rsp+180h] [rbp-1A8h] BYREF
  unsigned __int64 v35; // [rsp+2E8h] [rbp-40h]

  v6 = &v32[40];
  v7 = (unsigned __int64)&v33;
  v35 = __readfsqword(0x28u);
  memset(v32, 255, 24);
  *(_QWORD *)&v32[24] = 0;
  *(_QWORD *)&v32[32] = 0;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 40;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *((_QWORD *)v6 - 2) = 0;
  }
  while ( &v33 != v6 );
  if ( a5 > 0 )
  {
    v9 = 0;
    while ( (unsigned int)decode_insn(v32, a4, v7, 0.0) )
    {
      if ( *(_WORD *)&v32[24] == 180 && (*(_WORD *)&v32[86] == 1 || *(_WORD *)&v32[86] == *(_WORD *)(a1 + 170)) )
      {
        v12 = sub_5B600(*(_QWORD *)a1, a2, *(_QWORD *)&v32[16], *(unsigned __int16 *)&v32[46], 0);
        v7 = v12;
        if ( (_BYTE)v12 )
        {
          if ( (unsigned __int64)(*a2 - 1LL) > 7 )
            return 0;
          v13 = *(_QWORD *)&v32[16] + *(unsigned __int16 *)&v32[26];
          v30 = v12;
          qmemcpy(v34, v32, sizeof(v34));
          v14 = *(_QWORD *)&v32[96];
          v15 = decode_insn(v32, v13, v12, 0.0);
          v16 = v30;
          if ( v15 && *(_WORD *)&v32[24] == 285
            || (v17 = decode_insn(v32, v13 + *(unsigned __int16 *)&v32[26], v30, 0.0), v16 = v30, v17)
            && *(_WORD *)&v32[24] == 285 )
          {
            v31 = v16;
            v24 = *(_QWORD *)&v32[16] + *(unsigned __int16 *)&v32[26];
            *a3 = *(_QWORD *)&v32[48];
            v25 = *(_WORD *)&v32[46];
            v26 = decode_insn(v32, v24, v16, 0.0);
            v16 = v31;
            if ( !v26 || *(_WORD *)&v32[24] != 180 )
            {
              if ( !(unsigned int)decode_insn(v32, v24 + *(unsigned __int16 *)&v32[26], v31, 0.0) )
                return 0;
              v16 = v31;
              if ( *(_WORD *)&v32[24] != 180 )
                return 0;
            }
            if ( *(_WORD *)&v32[46] != v25 || *(_QWORD *)&v32[96] != v14 + 1 )
              return 0;
          }
          else
          {
            qmemcpy(v32, v34, sizeof(v32));
            *a3 = 0;
          }
          v18 = *(_QWORD *)&v32[16] + *(unsigned __int16 *)&v32[26];
          v28 = v16;
          v19 = decode_insn(v32, v18, v16, 0.0);
          v20 = v28;
          if ( v19 && *(_WORD *)&v32[24] == 4
            || (unsigned int)decode_insn(v32, v18 + *(unsigned __int16 *)&v32[26], v28, 0.0)
            && (v20 = v28, *(_WORD *)&v32[24] == 4) )
          {
            if ( *(_WORD *)&v32[86] == 1 || *(_WORD *)&v32[86] == *(_WORD *)(a1 + 170) )
            {
              if ( (v21 = *(_QWORD *)&v32[16] + *(unsigned __int16 *)&v32[26],
                    v29 = v20,
                    v22 = *(_WORD *)&v32[46],
                    v23 = decode_insn(v32, v21, v20, 0.0),
                    v10 = v29,
                    v23)
                && *(_WORD *)&v32[24] == 206
                && (v22 == -1 || v32[41] == 1 && v22 == *(_WORD *)&v32[46])
                || (unsigned int)decode_insn(v32, v21 + *(unsigned __int16 *)&v32[26], v29, 0.0)
                && (v10 = v29, *(_WORD *)&v32[24] == 206) )
              {
                if ( *(_QWORD *)&v32[96] != v14 + 4 )
                  LOBYTE(v10) = v14 + 8 == *(_QWORD *)&v32[96];
                return v10;
              }
            }
          }
          return 0;
        }
      }
      ++v9;
      a4 += *(unsigned __int16 *)&v32[26];
      if ( a5 == v9 )
        return 0;
    }
  }
  return 0;
}
