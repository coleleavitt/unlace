__int64 __fastcall sub_7ECAD0(__int64 *a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 *v3; // rbx
  unsigned int v4; // r13d
  __int64 *v5; // r14
  __int64 *v7; // rbx
  __int64 *v8; // r14
  __int64 *v9; // rbx
  __int64 *v10; // r14
  __int64 *v11; // rbx
  __int64 *v12; // r14
  __int64 *v13; // rbx
  __int64 *v14; // r12

  v2 = sub_7EBA80(a1, *(_QWORD *)(a2 + 40));
  if ( (_BYTE)v2 )
  {
    v3 = *(__int64 **)(a2 + 56);
    v4 = v2;
    v5 = &v3[*(unsigned int *)(a2 + 48)];
    if ( v5 == v3 )
    {
LABEL_8:
      v7 = *(__int64 **)(a2 + 72);
      v8 = &v7[*(unsigned int *)(a2 + 64)];
      if ( v8 == v7 )
      {
LABEL_13:
        v9 = *(__int64 **)(a2 + 88);
        v10 = &v9[*(unsigned int *)(a2 + 80)];
        if ( v9 == v10 )
        {
LABEL_18:
          v11 = *(__int64 **)(a2 + 104);
          v12 = &v11[*(unsigned int *)(a2 + 96)];
          if ( v12 == v11 )
          {
LABEL_23:
            v13 = *(__int64 **)(a2 + 136);
            v14 = &v13[*(unsigned int *)(a2 + 128)];
            if ( v14 == v13 )
              return v4;
            while ( (unsigned __int8)sub_7EBA80(a1, *v13) )
            {
              if ( ++v13 == v14 )
                return v4;
            }
          }
          else
          {
            while ( (unsigned __int8)sub_7EBA80(a1, *v11) )
            {
              if ( ++v11 == v12 )
                goto LABEL_23;
            }
          }
        }
        else
        {
          while ( (unsigned __int8)sub_7EBA80(a1, *v9) )
          {
            if ( v10 == ++v9 )
              goto LABEL_18;
          }
        }
      }
      else
      {
        while ( (unsigned __int8)sub_7EBA80(a1, *v7) )
        {
          if ( v8 == ++v7 )
            goto LABEL_13;
        }
      }
    }
    else
    {
      while ( (unsigned __int8)sub_7EBA80(a1, *v3) )
      {
        if ( v5 == ++v3 )
          goto LABEL_8;
      }
    }
  }
  return 0;
}

