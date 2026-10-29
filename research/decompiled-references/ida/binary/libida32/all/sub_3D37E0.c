unsigned __int64 __fastcall sub_3D37E0(__int64 *a1)
{
  __int64 v1; // rax
  int v2; // eax
  int v3; // r13d
  int v4; // r12d
  int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // eax
  unsigned int *v8; // r15
  char v9; // dl
  int custom_refinfo; // eax
  char *v12; // [rsp+8h] [rbp-60h]
  _BYTE v13[12]; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v14; // [rsp+1Ch] [rbp-4Ch]
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v1 = *a1;
  v15 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(*(_QWORD *)(v1 + 16) + 4LL);
  if ( v2 == 25 )
  {
    v12 = "R11";
    custom_refinfo = find_custom_refinfo((void *)"L21");
  }
  else
  {
    if ( v2 != 23 )
    {
      v3 = -1;
      v4 = -1;
      goto LABEL_4;
    }
    v12 = (char *)"LO10";
    custom_refinfo = find_custom_refinfo((void *)"HI22");
  }
  v4 = custom_refinfo;
  v3 = find_custom_refinfo(v12);
LABEL_4:
  if ( a1[16] )
  {
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      v8 = (unsigned int *)(a1[15] + 8 * v6);
      if ( !(unsigned __int8)get_refinfo(v13, *v8, *((unsigned __int8 *)v8 + 4)) )
        goto LABEL_9;
      v9 = v14 & 0x4F;
      if ( (v14 & 0x4F) == 7 )
      {
        if ( v4 == -1 )
          sub_365330();
        if ( v4 == -2 )
        {
          v4 = -2;
          goto LABEL_9;
        }
        v7 = (unsigned __int8)v4 | 0x40 | v14 & 0xFFFFFFB0;
        goto LABEL_8;
      }
      if ( v9 == 8 )
        break;
      if ( !v9 )
      {
        v7 = v14 & 0xFFFFFFB0 | 0xA;
LABEL_8:
        v14 = v7;
        set_refinfo_ex(*v8, *((unsigned __int8 *)v8 + 4), v13);
      }
LABEL_9:
      v6 = ++v5;
      if ( v5 >= (unsigned __int64)a1[16] )
        return v15 - __readfsqword(0x28u);
    }
    if ( v3 == -1 )
      sub_365330();
    if ( v3 == -2 )
      goto LABEL_9;
    v7 = (unsigned __int8)v3 | 0x40 | v14 & 0xFFFFFFB0;
    goto LABEL_8;
  }
  return v15 - __readfsqword(0x28u);
}

