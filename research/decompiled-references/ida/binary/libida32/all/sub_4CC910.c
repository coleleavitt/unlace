__int64 __fastcall sub_4CC910(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbp
  __int64 v5; // rdx
  const char *v6; // r12
  size_t v7; // rax
  size_t v8; // rbp
  unsigned __int64 v9; // r13
  __int64 v10; // rdx
  char *v11; // rdi
  __int64 v12; // rax
  _QWORD v13[135]; // [rsp+0h] [rbp-438h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v13[129] = __readfsqword(0x28u);
  v3 = *(_QWORD **)a1;
  switch ( *(_BYTE *)(v2 + 12) & 0x4F )
  {
    case 1:
    case 2:
    case 9:
    case 0xA:
      return 2;
    case 3:
      v6 = (const char *)v3[156];
      if ( v6 )
        goto LABEL_8;
      if ( v3[147] )
        goto LABEL_23;
      if ( !(unsigned __int8)getinf_flag(2, 2) )
        goto LABEL_9;
      v9 = 9;
      v8 = 8;
      v6 = "low8(%s)";
      goto LABEL_26;
    case 4:
      v6 = (const char *)v3[158];
      if ( v6 )
        goto LABEL_8;
      if ( v3[147] )
        goto LABEL_23;
      if ( !(unsigned __int8)getinf_flag(2, 2) )
        goto LABEL_9;
      v9 = 10;
      v8 = 9;
      v6 = "low16(%s)";
      goto LABEL_26;
    case 5:
      v6 = (const char *)v3[157];
      if ( v6 )
        goto LABEL_8;
      if ( v3[152] )
        goto LABEL_4;
      if ( !(unsigned __int8)getinf_flag(2, 2) )
        goto LABEL_9;
      v9 = 10;
      v8 = 9;
      v6 = "high8(%s)";
      goto LABEL_26;
    case 6:
      v6 = (const char *)v3[159];
      if ( v6 )
      {
LABEL_8:
        v7 = strlen(v6);
        v8 = v7;
        if ( v7 )
        {
          v9 = v7 + 1;
          goto LABEL_26;
        }
LABEL_9:
        a2[1] = 0;
        return 0;
      }
      if ( v3[152] )
      {
LABEL_4:
        v5 = *(unsigned int *)(a1 + 60);
        if ( (int)v5 > 0 )
        {
          btoa32(v13, 1024, v5, 10);
LABEL_6:
          sub_3573A0((char **)a2);
          return 1;
        }
        if ( !under_debugger )
          interr(1363);
        goto LABEL_42;
      }
      if ( !(unsigned __int8)getinf_flag(2, 2) )
        goto LABEL_9;
      v9 = 11;
      v8 = 10;
      v6 = "high16(%s)";
LABEL_26:
      v11 = (char *)*a2;
      if ( a2[2] < v9 )
      {
        v12 = qvector_reserve(a2, *a2, v9, 1);
        *a2 = v12;
        v11 = (char *)v12;
      }
      a2[1] = v9;
      memmove(v11, v6, v8);
      *(_BYTE *)(*a2 + v8) = 0;
      return 0;
    case 0xB:
      if ( v3[147] )
      {
LABEL_23:
        v10 = *(unsigned int *)(a1 + 56);
        if ( (_DWORD)v10 )
        {
          btoa32(v13, 1024, v10, 0);
          goto LABEL_6;
        }
        if ( !under_debugger )
          interr(1362);
LABEL_42:
        BUG();
      }
      if ( (unsigned __int8)getinf_flag(2, 2) )
      {
        v9 = 10;
        v8 = 9;
        v6 = "low32(%s)";
        goto LABEL_26;
      }
      goto LABEL_9;
    case 0xC:
      if ( v3[152] )
        goto LABEL_4;
      if ( !(unsigned __int8)getinf_flag(2, 2) )
        goto LABEL_9;
      v9 = 11;
      v8 = 10;
      v6 = "high32(%s)";
      goto LABEL_26;
    default:
      if ( !under_debugger )
        interr(1361);
      goto LABEL_42;
  }
}

