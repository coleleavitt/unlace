__int64 __fastcall sub_4F7580(char *s2, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // r15
  const char *v9; // rdi
  __int64 v10; // rbp
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18[9]; // [rsp+0h] [rbp-48h] BYREF

  v18[1] = __readfsqword(0x28u);
  if ( (int)qword_8D1EC0 <= 0 )
  {
LABEL_11:
    v12 = operator new(0x30u);
    *(_QWORD *)v12 = 0;
    v10 = v12;
    *(_QWORD *)(v12 + 40) = 0;
    *(_OWORD *)(v12 + 8) = 0;
    *(_OWORD *)(v12 + 24) = 0;
    sub_4F65D0(v12, s2);
    v18[0] = v10;
    sub_4F70C0((int **)&xmmword_8D1EB0, (int *)qword_8D1EC0, v18, v13, v14, v15);
    if ( !xmmword_8D1EB0 || *(int *)xmmword_8D1EB0 > 1 )
      sub_4F6CE0((__int64)&xmmword_8D1EB0, 0, 0, 0, v16, v17);
  }
  else
  {
    v7 = 0;
    v8 = 8LL * (unsigned int)(qword_8D1EC0 - 1) + 8;
    while ( 1 )
    {
      if ( !xmmword_8D1EB0 || *(int *)xmmword_8D1EB0 > 1 )
        sub_4F6CE0((__int64)&xmmword_8D1EB0, 0, 0, 0, a5, a6);
      v9 = &s1;
      v10 = *(_QWORD *)((char *)*(&xmmword_8D1EB0 + 1) + v7);
      if ( *(_QWORD *)(v10 + 8) )
        v9 = *(const char **)v10;
      if ( !strcmp(v9, s2) )
        break;
      v7 += 8;
      if ( v7 == v8 )
        goto LABEL_11;
    }
  }
  return v10;
}
