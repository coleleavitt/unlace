__int64 __fastcall sub_39780(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 *v5; // rax
  unsigned __int8 v6; // si
  __int64 v7; // rax
  __int64 *v8; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  unsigned __int64 v12; // r14
  __int64 v13; // rdi
  __int64 *v14; // rax
  int v15; // r8d
  int v16; // r9d
  const char *v17; // rdx
  __int64 *v18; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  const char *v23; // rsi
  __int64 v25; // [rsp+10h] [rbp-78h]
  __int64 v26; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v27; // [rsp+30h] [rbp-58h] BYREF
  __int128 v28; // [rsp+38h] [rbp-50h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  switch ( *(_BYTE *)(a1 + 142) )
  {
    case 0:
    case 5:
      return 0;
    case 1:
      v27 = 0xC7DDC813C3728202LL;
      v4 = sub_856E0(&v27, a1 + 64);
      v5 = (__int64 *)sub_85650(v4, *(unsigned __int16 *)(a1 + 140));
      sub_349E0(a1, v5);
      goto LABEL_6;
    case 2:
    case 4:
      goto LABEL_2;
    default:
      v27 = 0xCDE4050F41FA9376LL;
      v7 = sub_856E0(&v27, a1 + 64);
      v8 = (__int64 *)sub_85680(v7, *(unsigned int *)(a1 + 136));
      sub_349E0(a1, v8);
      v27 = 0;
      v28 = 0;
      if ( (debug & 0x400000) != 0 )
      {
        if ( *(_QWORD *)(a1 + 112) != -1 && (*(_QWORD *)(a1 + 112) & 0x7FFFFFFFFFFFFFFFLL) != 0 )
          sub_88A30((unsigned int)&v27, (unsigned int)"<%llu>: ", *(_DWORD *)(a1 + 112), v9, v10, v11);
        else
          sub_88A30((unsigned int)&v27, (unsigned int)"", *(_DWORD *)(a1 + 112), v9, v10, v11);
        if ( (debug & 0x400000) != 0 )
        {
          v18 = sub_34340(a1);
          v23 = src;
          if ( v18[1] )
            v23 = (const char *)*v18;
          sub_88B80((unsigned int)"computing hash for %s: ", (_DWORD)v23, v19, v20, v21, v22);
        }
      }
      if ( *(_QWORD *)(a1 + 152) )
      {
        v12 = 0;
        do
        {
          if ( dword_D08E4 && (debug & 0x400000) != 0 )
          {
            v13 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v12);
            v25 = *(_QWORD *)(v13 + 72);
            v14 = sub_34340(v13);
            v17 = src;
            if ( v14[1] )
              v17 = (const char *)*v14;
            sub_88B80((unsigned int)"member #%zu (%s) type_hash=%llx\n", v12, (_DWORD)v17, v25, v15, v16);
          }
          v26 = *(_QWORD *)(a1 + 72) ^ *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v12) + 72LL);
          sub_349E0(a1, &v26);
          ++v12;
        }
        while ( v12 < *(_QWORD *)(a1 + 152) );
      }
      sub_81710(&v27);
LABEL_6:
      if ( !*(_QWORD *)(a1 + 64) )
      {
LABEL_2:
        copy_tinfo_t(a2, a1 + 8);
        return 1;
      }
      if ( (unsigned __int8)sub_38360(a1) )
      {
        v6 = 4;
        if ( *(_BYTE *)(a1 + 142) == 1 )
          v6 = 2;
        sub_34840(a1, v6);
        copy_tinfo_t(a2, a1 + 8);
        return 1;
      }
      return 0;
  }
}
