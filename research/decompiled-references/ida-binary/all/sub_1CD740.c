__int64 __fastcall sub_1CD740(unsigned int *a1, __int64 *a2, double a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rbp
  int v9; // edx
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // [rsp+8h] [rbp-80h]
  __int64 (__fastcall **v13)(); // [rsp+10h] [rbp-78h] BYREF
  __int16 v14; // [rsp+18h] [rbp-70h]
  __int64 (__fastcall **v15)(); // [rsp+20h] [rbp-68h] BYREF
  char v16; // [rsp+28h] [rbp-60h]
  unsigned __int8 v17; // [rsp+29h] [rbp-5Fh]
  __int64 v18; // [rsp+30h] [rbp-58h] BYREF
  __int128 v19; // [rsp+38h] [rbp-50h]
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v13 = &desktop_json_seeker_t___vtable;
  v14 = 0;
  sub_1CD450((void (__fastcall ***)(_QWORD, __int64))&v13, a1, a3);
  result = (unsigned __int8)v14;
  if ( (_BYTE)v14 )
  {
    v17 = 0;
    v15 = &desktop_json_fixer_t___vtable;
    v16 = HIBYTE(v14);
    sub_1CD450((void (__fastcall ***)(_QWORD, __int64))&v15, a1, a3);
    result = v17;
    if ( v17 )
    {
      v18 = 0;
      v19 = 0;
      sub_1CD660(&v18);
      v4 = operator new(0x18u);
      *(_QWORD *)v4 = 0;
      v5 = v4;
      *(_OWORD *)(v4 + 8) = 0;
      sub_519010(v4, &v18);
      v6 = a2[1];
      v12 = *a2;
      if ( v6 )
      {
        v7 = *a2;
        v8 = 0;
        while ( !*(_QWORD *)(v7 + 8) || strcmp(*(const char **)v7, "partitions") )
        {
          ++v8;
          v7 += 40;
          if ( v6 == v8 )
            goto LABEL_14;
        }
      }
      else
      {
LABEL_14:
        if ( a2[2] < (unsigned __int64)(v6 + 1) )
        {
          v12 = qvector_reserve(a2, v12, v6 + 1, 40);
          v6 = a2[1];
          *a2 = v12;
        }
        v7 = v12 + 40 * v6;
        *(_QWORD *)v7 = 0;
        *(_DWORD *)(v7 + 24) = 0;
        *(_QWORD *)(v7 + 32) = 0;
        *(_OWORD *)(v7 + 8) = 0;
        ++a2[1];
        sub_1CB2E0((__int64 *)v7, "partitions");
      }
      v9 = *(_DWORD *)(v7 + 24);
      v10 = v7 + 24;
      if ( v9 )
        jvalue_t_clear(v10);
      *(_DWORD *)v10 = 4;
      v11 = v18;
      *(_QWORD *)(v10 + 8) = v5;
      if ( v11 )
      {
        *(_QWORD *)&v19 = 0;
        qfree(v11, "partitions");
      }
      return v17;
    }
  }
  return result;
}
