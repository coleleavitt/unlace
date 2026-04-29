__int64 __fastcall sub_4AA0(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+0h] [rbp-58h]
  unsigned __int64 v18; // [rsp+0h] [rbp-58h]
  unsigned __int64 v19; // [rsp+8h] [rbp-50h]
  unsigned __int64 v20; // [rsp+8h] [rbp-50h]
  char v21; // [rsp+17h] [rbp-41h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-40h]

  v6 = a1[3];
  v22 = __readfsqword(0x28u);
  if ( !v6 )
  {
    if ( a2 >= a3 )
    {
LABEL_3:
      a1[3] = 0;
      *(_OWORD *)a1 = -1;
      return 0;
    }
    v10 = a1[1];
    v9 = *a1;
    v11 = a1[2];
    v14 = a1[4];
    v12 = a3 - a2;
    v21 = 0;
    v13 = v10 - v9;
    if ( (unsigned __int64)&v21 < v11 )
      goto LABEL_23;
    goto LABEL_17;
  }
  v9 = *a1;
  if ( *a1 == a2 )
  {
    if ( a1[1] == a3 )
      return 1;
    if ( a2 >= a3 )
      goto LABEL_3;
  }
  else if ( a2 >= a3 )
  {
    goto LABEL_3;
  }
  v10 = a1[1];
  v11 = a1[2];
  v21 = 0;
  v12 = a3 - a2;
  v13 = v10 - v9;
  if ( a3 - a2 < v6 )
    goto LABEL_7;
  if ( v6 >= v12 )
    goto LABEL_8;
  v14 = a1[4];
  if ( (unsigned __int64)&v21 >= v11 )
  {
LABEL_17:
    if ( (unsigned __int64)&v21 < v11 + v14 )
    {
      if ( v14 < v12 )
      {
        v20 = v13;
        v18 = v10;
        v16 = qvector_reserve();
        v13 = v20;
        v10 = v18;
        a1[2] = v16;
        v11 = v16;
        v6 = a1[3];
      }
      if ( v6 < v12 )
      {
        do
        {
          *(_BYTE *)(v11 + v6++) = 0;
          v11 = a1[2];
        }
        while ( v6 != v12 );
      }
      goto LABEL_7;
    }
LABEL_23:
    if ( v14 >= v12 )
      goto LABEL_24;
    goto LABEL_30;
  }
  if ( v14 >= v12 )
  {
    do
    {
LABEL_25:
      *(_BYTE *)(v11 + v6++) = 0;
      v11 = a1[2];
    }
    while ( v6 != v12 );
    goto LABEL_7;
  }
LABEL_30:
  v19 = v13;
  v17 = v10;
  v15 = qvector_reserve();
  v13 = v19;
  v10 = v17;
  a1[2] = v15;
  v11 = v15;
  v6 = a1[3];
LABEL_24:
  if ( v6 < v12 )
    goto LABEL_25;
LABEL_7:
  a1[3] = v12;
LABEL_8:
  a1[1] = a3;
  if ( *a1 == a2 )
  {
    if ( v12 < v13 )
      return 1;
    v12 = v12 + v9 - v10;
  }
  else
  {
    *a1 = a2;
  }
  if ( get_bytes() != v12 && (a4 & 1) == 0 )
    goto LABEL_3;
  return 1;
}
