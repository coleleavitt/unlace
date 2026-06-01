unsigned __int64 __fastcall sub_194890(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  void (*v3)(void); // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  __int64 v10; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+8h] [rbp-C0h]
  __int128 v12; // [rsp+10h] [rbp-B8h]
  __int64 v13; // [rsp+20h] [rbp-A8h]
  __int128 v14; // [rsp+28h] [rbp-A0h]
  __int128 v15; // [rsp+38h] [rbp-90h]
  __int128 v16; // [rsp+48h] [rbp-80h]
  __int128 v17; // [rsp+58h] [rbp-70h]
  int v18; // [rsp+68h] [rbp-60h]
  __int64 v19; // [rsp+70h] [rbp-58h]
  __int64 v20; // [rsp+78h] [rbp-50h]
  __int64 v21; // [rsp+80h] [rbp-48h]
  unsigned __int64 v22; // [rsp+88h] [rbp-40h]
  unsigned __int64 v23; // [rsp+98h] [rbp-30h]

  v2 = *a1;
  v23 = __readfsqword(0x28u);
  v3 = *(void (**)(void))(v2 + 392);
  if ( v3 != nullsub_121 )
    v3();
  v4 = a1[315];
  v10 = a2;
  v12 = 0;
  v11 = 0;
  v5 = *(int *)(v4 + 48);
  v14 = 0;
  v13 = 0;
  v18 = -1;
  v19 = 12;
  v20 = -1;
  v21 = -1;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( v5 )
  {
    v11 = qvector_reserve();
    if ( *((_QWORD *)&v14 + 1) < v5 )
      v13 = qvector_reserve();
  }
  v22 = v5;
  v6 = sub_194540((__int64)a1);
  v7 = v6;
  v8 = 0;
  if ( v6 )
  {
    do
    {
      while ( !(unsigned __int8)sub_17FBA0((__int64)(a1 + 20)) )
      {
        if ( v7 == ++v8 )
          goto LABEL_9;
      }
      sub_181F40(a2, v8++, (__int64)&v10);
    }
    while ( v7 != v8 );
  }
LABEL_9:
  if ( (_QWORD)v15 )
  {
    *((_QWORD *)&v15 + 1) = 0;
    qfree();
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return v23 - __readfsqword(0x28u);
}

