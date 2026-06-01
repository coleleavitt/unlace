__int64 __fastcall sub_2288F0(_QWORD *a1, unsigned __int64 a2, signed int a3, _QWORD *a4)
{
  int v4; // ebp
  unsigned __int64 v5; // rbx
  int *v6; // r8
  int *v7; // r12
  int *i; // r14
  _DWORD *v9; // r15
  signed __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  signed __int64 v16; // [rsp+18h] [rbp-80h]
  _QWORD *v17; // [rsp+28h] [rbp-70h]
  unsigned __int64 v18; // [rsp+30h] [rbp-68h] BYREF
  signed __int64 v19; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-58h] BYREF
  char v21; // [rsp+48h] [rbp-50h]
  unsigned __int64 v22; // [rsp+58h] [rbp-40h]

  v4 = a3;
  v5 = a2;
  v17 = a4;
  v22 = __readfsqword(0x28u);
  v20 = a2;
  v21 = 5;
  if ( (unsigned __int8)sub_227ED0((__int64)a1, (__int64)&v20, a4, a3) )
  {
    v6 = (int *)a1[57];
    v16 = v4 + a2;
    v7 = &v6[a1[58]];
    if ( v6 != v7 )
    {
      for ( i = (int *)a1[57]; v7 != i; ++i )
      {
        v9 = (_DWORD *)(a1[54] + 104LL * *i);
        if ( (unsigned __int8)sub_1C34E0((__int64)v9, (__int64 *)&v18, &v19, v9[22]) )
        {
          v10 = v19;
          if ( v4 )
          {
            if ( (_DWORD)v19 != (_DWORD)v18 )
            {
              v11 = v4 + v5 - 1;
              if ( v11 >= v18 )
              {
                v12 = v18 + (int)v19 - (int)v18 - 1;
                if ( v12 >= v5 )
                {
                  if ( *v9 != 1 )
                    goto LABEL_27;
                  if ( v18 < v5 || v11 < v12 )
                  {
                    if ( v16 >= v19 )
                      v10 = v16;
                    v13 = 16;
                    if ( (__int64)v5 > (__int64)v18 )
                      v5 = v18;
                    v14 = a1[188];
                    v16 = v10;
                    v4 = v10 - v5;
                    if ( (*(_BYTE *)(v14 + 50) & 8) == 0 )
                      v13 = 2 * *(_DWORD *)(v14 + 80);
                    if ( v4 < v13 )
                      v4 = sub_11CA90(v4);
                    v20 = v5;
                    v21 = 5;
                    if ( !(unsigned __int8)sub_227ED0((__int64)a1, (__int64)&v20, nullptr, v4) )
                      goto LABEL_27;
                    v17 = nullptr;
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( v17 )
    {
      v20 = 0;
      copy_tinfo_t();
    }
    else
    {
      if ( !*(_BYTE *)(a1[187] + 148LL) )
        v4 = sub_11CA90((int)v16 - (int)v5);
      v20 = 0;
    }
    LOBYTE(v5) = v5 == sub_227D30((__int64)a1, v5, &v20, v4);
    clear_tinfo_t();
  }
  else
  {
LABEL_27:
    LODWORD(v5) = 0;
  }
  return (unsigned int)v5;
}
