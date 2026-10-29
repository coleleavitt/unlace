unsigned __int64 __fastcall sub_79D0(_QWORD *a1, int a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rax
  int v7; // ebp
  unsigned __int64 v8; // rax
  int v9; // ebx
  int v10; // ebx
  unsigned __int64 v11; // rdx
  unsigned __int16 *v12; // rax
  unsigned __int16 v13; // ax
  __int64 v14; // r14
  unsigned int dword; // eax
  int v18; // [rsp+18h] [rbp-70h] BYREF
  int v19; // [rsp+1Ch] [rbp-6Ch]
  _QWORD v20[3]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v21; // [rsp+38h] [rbp-50h]
  __int64 v22; // [rsp+40h] [rbp-48h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v4 = a2 + 4;
  a1[3] = v4;
  if ( v4 <= 0xFFFFFFFFFFFFFFFBLL && a1[1] >= v4 + 4 )
  {
    v7 = *(_DWORD *)(*a1 + v4);
    a1[3] = v4 + 4;
    while ( v7 > 0 )
    {
      v19 = 0;
      if ( sub_78F0(a1, (char *)&v18, 8) != 8 )
        break;
      v8 = a1[3];
      v9 = (v19 - 7) >> 1;
      v7 -= v9;
      if ( v9 > (int)((a1[1] - v8) >> 1) )
        v9 = (a1[1] - v8) >> 1;
      v10 = v9 - 1;
      if ( v10 >= 0 )
      {
        while ( 1 )
        {
          if ( v8 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v11 = v8 + 2;
            if ( a1[1] >= v8 + 2 )
            {
              v12 = (unsigned __int16 *)(*a1 + v8);
              a1[3] = v11;
              v13 = *v12;
              if ( v13 > 0xFFFu )
              {
                v20[1] = 0;
                v20[0] = 0x200000004LL;
                v20[2] = a3;
                v21 = 0;
                v14 = a4 + v18 + (v13 & 0xFFFu);
                v22 = 0;
                dword = get_dword(v14);
                v22 = 0;
                v21 = dword;
                set_fixup(v14, v20);
              }
            }
          }
          if ( v10-- == 0 )
            break;
          v8 = a1[3];
        }
      }
    }
  }
  return v23 - __readfsqword(0x28u);
}

