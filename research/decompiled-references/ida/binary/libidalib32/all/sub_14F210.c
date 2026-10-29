__int64 __fastcall sub_14F210(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  const char *v4; // r15
  __int64 v5; // r14
  __int64 v8; // rdx
  unsigned __int64 v10; // rcx
  unsigned int v11; // edx
  signed __int64 v12; // r15
  __int64 v13; // rsi
  unsigned int tinfo; // r14d
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 v17; // r12
  __int64 v18; // rbp
  _QWORD *v19; // rbx
  void *v21; // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+0h] [rbp-A0h]
  _QWORD *src; // [rsp+8h] [rbp-98h]
  __int64 v25; // [rsp+28h] [rbp-78h] BYREF
  __int128 v26; // [rsp+30h] [rbp-70h]
  __int64 v27; // [rsp+40h] [rbp-60h]
  __int128 v28; // [rsp+48h] [rbp-58h]
  int v29; // [rsp+58h] [rbp-48h]
  char v30; // [rsp+5Ch] [rbp-44h]
  unsigned __int64 v31; // [rsp+60h] [rbp-40h]

  v4 = "Could not create enum";
  v5 = 21;
  v8 = 22;
  v31 = __readfsqword(0x28u);
  v29 = 0;
  v25 = 0;
  v27 = 0;
  v30 = 0x80;
  v26 = 0;
  v28 = 0;
  if ( a4 )
  {
    v8 = 18;
    v5 = 17;
    v4 = "Invalid enum data";
  }
  v23 = v8;
  src = (_QWORD *)qvector_reserve();
  v10 = (unsigned __int64)(src + 1) & 0xFFFFFFFFFFFFFFF8LL;
  *src = *(_QWORD *)v4;
  *(_QWORD *)((char *)src + v5 - 8) = *(_QWORD *)&v4[v5 - 8];
  v11 = 0;
  v12 = v4 - ((const char *)src - v10);
  do
  {
    v13 = v11;
    v11 += 8;
    *(_QWORD *)(v10 + v13) = *(_QWORD *)(v12 + v13);
  }
  while ( v11 < (((_DWORD)v5 + (_DWORD)src - (_DWORD)v10) & 0xFFFFFFF8) );
  *((_BYTE *)src + v5) = 0;
  if ( (!a4 || (unsigned __int8)get_tinfo_details())
    && (unsigned __int8)sub_14E230(a2, (__int64)&v25)
    && (tinfo = create_tinfo(), (_BYTE)tinfo) )
  {
    if ( !(unsigned int)set_tinfo_property4() )
      goto LABEL_11;
    tinfo_errstr();
    sub_94360(a3);
  }
  else
  {
    v21 = (void *)*a3;
    if ( a3[2] < v23 )
    {
      v22 = qvector_reserve();
      *a3 = v22;
      v21 = (void *)v22;
    }
    a3[1] = v23;
    memmove(v21, src, v23 - 1);
    *(_BYTE *)(*a3 + v23 - 1) = 0;
  }
  tinfo = 0;
LABEL_11:
  if ( src )
    qfree();
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree();
  }
  v15 = v25;
  if ( v25 )
  {
    v16 = v26;
    if ( (_QWORD)v26 )
    {
      v17 = 0;
      v18 = 0;
      do
      {
        v19 = (_QWORD *)(v15 + v17);
        if ( *(_QWORD *)(v15 + v17 + 24) )
        {
          v19[4] = 0;
          qfree();
        }
        if ( *v19 )
        {
          v19[1] = 0;
          qfree();
        }
        ++v18;
        v15 = v25;
        v17 += 56;
      }
      while ( v16 != v18 );
    }
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  return tinfo;
}

