__int64 __fastcall sub_122E80(double a1)
{
  _DWORD *first_seg; // rax
  _DWORD *v2; // rbx
  int v3; // eax
  int v4; // ebp
  int v5; // r9d
  int v6; // eax
  int v7; // ebx
  const char *v8; // rax
  __int16 v10; // [rsp+0h] [rbp-28h] BYREF
  __int16 v11; // [rsp+2h] [rbp-26h] BYREF
  int v12; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  first_seg = (_DWORD *)get_first_seg();
  if ( first_seg )
  {
    v2 = first_seg;
    v3 = *first_seg;
    v10 = 0;
    v11 = 3;
    v12 = v3;
    v4 = getinf();
    if ( v4 || !v12 )
    {
      v12 = v4;
      v10 = 2;
    }
    if ( (unsigned int)sub_18BA90(
                         1028,
                         (unsigned int)sub_1212D0,
                         (unsigned int)&v10,
                         (unsigned int)&v12,
                         (unsigned int)&v11,
                         v5) )
    {
      v6 = v12;
      if ( v10 )
      {
        if ( v10 != 1 )
          v6 = v12 - v4;
        v7 = v6;
      }
      else
      {
        v7 = v12 - *v2;
      }
      if ( v7 && sub_121C70(0, -1, v7, a1) && (unsigned int)rebase_program() )
      {
        v8 = (const char *)move_segm_strerror();
        sub_92120((__int64)"%s", v8);
      }
    }
  }
  return 1;
}

