bool __fastcall sub_240CF0(__int64 a1, unsigned __int64 a2, __int64 a3, double a4)
{
  char *v4; // rcx
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rbp
  char v8; // dl
  char *v9; // rcx
  bool result; // al
  __int64 v11; // rdx
  _QWORD *v12; // rdi
  int v13; // eax
  __int64 segm_base; // rax
  bool v15; // [rsp+Fh] [rbp-59h]
  __int64 v16; // [rsp+18h] [rbp-50h] BYREF
  int v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+28h] [rbp-40h]
  __int128 v19; // [rsp+30h] [rbp-38h]
  unsigned __int64 v20; // [rsp+48h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  if ( (_DWORD)a3 == -1 )
    return 0;
  v4 = *(char **)(a1 + 40);
  if ( !v4 )
    goto LABEL_7;
  v5 = *(_QWORD *)&v4[32 * (int)a3 + 8];
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37) & 0x40) != 0 )
    {
      v6 = qword_8CC600;
      if ( qword_8CC600 )
      {
        *(_QWORD *)qword_8CC600 = v5;
        v6[1] = v4;
        *((_DWORD *)v6 + 4) = a3;
        if ( (unsigned int)sub_23D480((__int64)v6, 11, a3, v4, a4) != 1 )
        {
LABEL_7:
          v5 = -1;
          goto LABEL_8;
        }
        v5 = *(_QWORD *)qword_8CC600;
      }
    }
  }
LABEL_8:
  v7 = getseg(v5);
  if ( !v7 )
    return 1;
  a2 = (unsigned int)a2;
  v17 = -2;
  v18 = -1;
  v19 = 0;
  v8 = sub_23F680(SHIDWORD(qword_8CC340), a2, (const char *)&v17, 0.0);
  result = 1;
  if ( v8 )
  {
    v11 = v18;
    v16 = v18;
    if ( dbg
      && (*(_BYTE *)(dbg + 37) & 1) != 0
      && (v12 = qword_8CC600) != nullptr
      && (v13 = HIDWORD(qword_8CC340),
          *((_DWORD *)qword_8CC600 + 4) = v18,
          a2 = 10,
          *(_DWORD *)v12 = v13,
          v12[3] = &v16,
          (int)sub_23D480((__int64)v12, 10, v11, v9, 0.0) > 0) )
    {
      segm_base = get_segm_base(v7);
      result = v16 != segm_base;
    }
    else
    {
      result = 0;
    }
  }
  if ( v17 >= -1 )
  {
    if ( v18 )
    {
      v15 = result;
      *(_QWORD *)&v19 = 0;
      qfree(v18, (const char *)a2);
      return v15;
    }
  }
  return result;
}
