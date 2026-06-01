__int64 __fastcall sub_13C400(char a1, unsigned __int8 a2, char a3)
{
  __int64 v3; // r12
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rax
  __int16 flags; // dx
  __int64 result; // rax
  int v10; // eax
  char *v11; // rdx
  char *v12; // rcx
  int v13; // esi
  int v14; // r14d
  int v15; // ebx
  char v16; // al
  unsigned __int8 v17; // al
  unsigned __int64 *v18; // rax
  char *v19; // rbp
  char *v20; // rbp
  char *v21; // [rsp+8h] [rbp-1D0h]
  unsigned int v22; // [rsp+8h] [rbp-1D0h]
  char *v23; // [rsp+10h] [rbp-1C8h] BYREF
  __int128 v24; // [rsp+18h] [rbp-1C0h]
  __int128 v25; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v26; // [rsp+40h] [rbp-198h]
  __int64 v27; // [rsp+48h] [rbp-190h]
  __int64 v28; // [rsp+50h] [rbp-188h]
  char v29; // [rsp+58h] [rbp-180h] BYREF
  char v30; // [rsp+170h] [rbp-68h] BYREF
  unsigned __int64 v31; // [rsp+198h] [rbp-40h] BYREF

  v31 = __readfsqword(0x28u);
  v3 = qword_254470;
  if ( !qword_254470 )
    return 0xFFFFFFFFLL;
  v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_254470 + 416LL);
  if ( v6 == sub_B81F0 )
  {
    v7 = sub_15D8D0(qword_254470 + 440);
    sub_F5490(v3, *(_QWORD *)(v7 + 40));
  }
  else
  {
    ((void (__fastcall *)(__int64, _QWORD))v6)(qword_254470, a2);
  }
  flags = get_flags_ex();
  result = 0;
  if ( (~flags & 0x600) == 0 )
  {
    v23 = nullptr;
    v24 = 0;
    if ( sub_15E4F0(qword_254470, &v23, a2) > 0 )
    {
      v21 = v23;
      v10 = sub_15F0C0(qword_254470, a2);
      v11 = v21;
      v12 = &v21[v10];
      if ( v21 >= v12 )
      {
        v14 = 0;
        v15 = 0;
      }
      else
      {
        v13 = 0;
        v14 = 0;
        v15 = 0;
        do
        {
          v16 = *v11++;
          if ( v16 == 41 )
          {
            --v13;
          }
          else if ( v16 > 41 )
          {
            if ( v16 == 44 )
            {
              if ( v13 )
              {
                if ( (*(_BYTE *)(**(_QWORD **)(qword_254470 + 264) + 11LL) & 0x20) != 0 )
                  v14 = 128;
              }
              else
              {
                ++v15;
                v14 = 0;
              }
            }
          }
          else
          {
            if ( !v16 )
              break;
            v13 += v16 == 40;
          }
        }
        while ( v12 != v11 );
      }
      v17 = sub_13C140(qword_254470, a2, byte_1D7080);
      if ( (unsigned __int8)(v17 - 41) <= 7u )
      {
        v15 = v17 - 41;
        goto LABEL_16;
      }
      if ( !a3 )
      {
LABEL_16:
        v26 = -1;
        v18 = (unsigned __int64 *)&v29;
        v27 = 0;
        v28 = 0;
        v25 = -1;
        do
        {
          *(_WORD *)v18 = 0;
          v18 += 5;
          *((_WORD *)v18 - 19) = 0;
          *((_WORD *)v18 - 18) = 0;
          *((_DWORD *)v18 - 2) = 0;
          *((_WORD *)v18 - 17) = 0;
          *((_OWORD *)v18 - 2) = 0;
          *(v18 - 2) = 0;
        }
        while ( v18 != &v31 );
        if ( (int)decode_insn() > 0 )
        {
          if ( v15 > 7 )
          {
            if ( v15 == 8 )
            {
LABEL_25:
              v20 = &v30;
              v15 = 7;
              while ( !sub_13C0C0((__int64)v20, a1) )
              {
                --v15;
                v20 -= 40;
                v14 = 0;
                if ( v15 == -1 )
                  goto LABEL_28;
              }
            }
          }
          else
          {
            v19 = (char *)&v25 + 40 * v15 + 40;
            while ( !sub_13C0C0((__int64)v19, a1) )
            {
              ++v15;
              v19 += 40;
              v14 = 0;
              if ( v15 == 8 )
                goto LABEL_25;
            }
          }
        }
        result = v14 | (unsigned int)v15;
        goto LABEL_29;
      }
    }
LABEL_28:
    result = 0xFFFFFFFFLL;
LABEL_29:
    if ( v23 )
    {
      v22 = result;
      *(_QWORD *)&v24 = 0;
      qfree();
      return v22;
    }
  }
  return result;
}

