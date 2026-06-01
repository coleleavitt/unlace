__int64 __fastcall sub_331180(unsigned __int8 a1, unsigned __int8 a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r12
  __int16 flags; // dx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // eax
  char *v12; // rdx
  unsigned __int64 v13; // rcx
  int v14; // esi
  int v15; // r14d
  int v16; // ebp
  char v17; // al
  unsigned __int8 v18; // al
  __int64 v19; // r9
  char *v20; // rax
  unsigned int v21; // r13d
  char *v22; // rbx
  char *v23; // rbx
  unsigned __int64 v24; // [rsp+8h] [rbp-1D0h]
  unsigned int v25; // [rsp+8h] [rbp-1D0h]
  unsigned __int64 v26; // [rsp+10h] [rbp-1C8h] BYREF
  __int128 v27; // [rsp+18h] [rbp-1C0h]
  __int128 v28; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-198h]
  __int64 v30; // [rsp+48h] [rbp-190h]
  __int64 v31; // [rsp+50h] [rbp-188h]
  char v32; // [rsp+58h] [rbp-180h] BYREF
  char v33; // [rsp+170h] [rbp-68h] BYREF
  _QWORD v34[8]; // [rsp+198h] [rbp-40h] BYREF

  v34[0] = __readfsqword(0x28u);
  if ( !qword_8CD7E8 )
    return 0xFFFFFFFFLL;
  v3 = a2;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)qword_8CD7E8 + 720LL))(qword_8CD7E8, a2);
  flags = get_flags_ex(v5, 4);
  result = 0;
  if ( (~flags & 0x600) == 0 )
  {
    v9 = (__int64)&v26;
    v26 = 0;
    v27 = 0;
    if ( sub_1EB270(qword_8CD7E8, (__int64)&v26, v3, v7, 0.0) > 0 )
    {
      v24 = v26;
      v11 = sub_1EBFA0(qword_8CD7E8, v3, v26, v10, 0.0);
      v12 = (char *)v24;
      v13 = v24 + v11;
      if ( v24 >= v13 )
      {
        v15 = 0;
        v16 = 0;
      }
      else
      {
        v14 = 0;
        v15 = 0;
        v16 = 0;
        do
        {
          v17 = *v12++;
          if ( v17 == 41 )
          {
            --v14;
          }
          else if ( v17 > 41 )
          {
            if ( v17 == 44 )
            {
              if ( v14 )
              {
                if ( (*(_BYTE *)(**(_QWORD **)(qword_8CD7E8 + 208LL) + 11LL) & 0x20) != 0 )
                  v15 = 128;
              }
              else
              {
                ++v16;
                v15 = 0;
              }
            }
          }
          else
          {
            if ( !v17 )
              break;
            v14 += v17 == 40;
          }
        }
        while ( (char *)v13 != v12 );
      }
      v9 = v3;
      v18 = sub_330EE0(qword_8CD7E8, v3, byte_5E7EC0, v13, 0.0);
      if ( (unsigned __int8)(v18 - 41) <= 7u )
      {
        v16 = v18 - 41;
        goto LABEL_14;
      }
      if ( !a3 )
      {
LABEL_14:
        v29 = -1;
        v20 = &v32;
        v30 = 0;
        v31 = 0;
        v28 = -1;
        do
        {
          *(_WORD *)v20 = 0;
          v20 += 40;
          *((_WORD *)v20 - 19) = 0;
          *((_WORD *)v20 - 18) = 0;
          *((_DWORD *)v20 - 2) = 0;
          *((_WORD *)v20 - 17) = 0;
          *((_OWORD *)v20 - 2) = 0;
          *((_QWORD *)v20 - 2) = 0;
        }
        while ( v20 != (char *)v34 );
        v9 = v5;
        if ( (int)decode_insn(&v28, v5, v34, 0, 0, v19, 0.0) > 0 )
        {
          if ( v16 > 7 )
          {
            if ( v16 == 8 )
            {
              v21 = a1;
LABEL_24:
              v23 = &v33;
              v16 = 7;
              while ( 1 )
              {
                v9 = v21;
                if ( sub_330C00((__int64)v23, a1) )
                  break;
                --v16;
                v23 -= 40;
                v15 = 0;
                if ( v16 == -1 )
                  goto LABEL_27;
              }
            }
          }
          else
          {
            v21 = a1;
            v22 = (char *)&v28 + 40 * v16 + 40;
            while ( 1 )
            {
              v9 = a1;
              if ( sub_330C00((__int64)v22, a1) )
                break;
              ++v16;
              v22 += 40;
              v15 = 0;
              if ( v16 == 8 )
                goto LABEL_24;
            }
          }
        }
        result = v15 | (unsigned int)v16;
        goto LABEL_28;
      }
    }
LABEL_27:
    result = 0xFFFFFFFFLL;
LABEL_28:
    if ( v26 )
    {
      v25 = result;
      *(_QWORD *)&v27 = 0;
      qfree(v26, (const char *)v9);
      return v25;
    }
  }
  return result;
}
