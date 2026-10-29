__int64 __fastcall sub_94EFA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r14
  unsigned int v8; // r12d
  char v9; // al
  unsigned int v10; // eax
  char v11; // al
  __int64 v12; // r13
  char v13; // al
  char v14; // al
  char v15; // al
  char v16; // bp
  char v17; // bp
  unsigned int v18; // ebx
  unsigned int v20; // eax
  __int64 v21; // [rsp+8h] [rbp-1C0h]
  __int64 v22; // [rsp+28h] [rbp-1A0h]
  __int64 v23; // [rsp+38h] [rbp-190h]
  __int64 v24; // [rsp+48h] [rbp-180h]
  char v25; // [rsp+50h] [rbp-178h]
  char v26; // [rsp+50h] [rbp-178h]
  char v27; // [rsp+50h] [rbp-178h]
  char v28; // [rsp+50h] [rbp-178h]
  char v29; // [rsp+50h] [rbp-178h]
  char v30; // [rsp+50h] [rbp-178h]
  char v31; // [rsp+50h] [rbp-178h]
  char v32; // [rsp+5Fh] [rbp-169h]
  char v33; // [rsp+5Fh] [rbp-169h]
  void *v34; // [rsp+60h] [rbp-168h] BYREF
  unsigned int v35; // [rsp+68h] [rbp-160h]
  void *v36; // [rsp+70h] [rbp-158h] BYREF
  unsigned int v37; // [rsp+78h] [rbp-150h]
  void *v38; // [rsp+80h] [rbp-148h] BYREF
  unsigned int v39; // [rsp+88h] [rbp-140h]
  void *v40; // [rsp+90h] [rbp-138h] BYREF
  unsigned int v41; // [rsp+98h] [rbp-130h]
  void *v42; // [rsp+A0h] [rbp-128h] BYREF
  unsigned int v43; // [rsp+A8h] [rbp-120h]
  void *v44; // [rsp+B0h] [rbp-118h] BYREF
  unsigned int v45; // [rsp+B8h] [rbp-110h]
  void *v46; // [rsp+C0h] [rbp-108h] BYREF
  unsigned int v47; // [rsp+C8h] [rbp-100h]
  _BYTE v48[64]; // [rsp+D0h] [rbp-F8h] BYREF
  _BYTE v49[64]; // [rsp+110h] [rbp-B8h] BYREF
  void *v50; // [rsp+150h] [rbp-78h] BYREF
  unsigned int v51; // [rsp+158h] [rbp-70h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v48, v3);
  sub_A1A5E0(v2, 56);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v49, v5);
  sub_A1A5E0(v4, 56);
  v22 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  sub_8E6410((__int64)&v50, (__int64)v49);
  v23 = sub_8F8D30((__int64 *)&v50);
  sub_A1C0C0(&v50);
  sub_8E6310((__int64)&v50, (__int64)v49);
  v24 = sub_8F8D30((__int64 *)&v50);
  sub_A1C0C0(&v50);
  sub_8E6410((__int64)&v50, (__int64)v48);
  v6 = sub_8F8D30((__int64 *)&v50);
  sub_A1C0C0(&v50);
  sub_8E6310((__int64)&v50, (__int64)v48);
  v7 = sub_8F8D30((__int64 *)&v50);
  sub_A1C0C0(&v50);
  v8 = *(_DWORD *)(v23 + 8);
  v47 = v8;
  if ( v8 > 0x40 )
  {
    sub_2585A50(&v46, 0, 1);
    v51 = v47;
    if ( v47 <= 0x40 )
    {
      v35 = v47;
      v34 = v46;
      v9 = sub_922490(v6, (__int64)&v34);
      goto LABEL_4;
    }
    sub_2585B30(&v50);
    v35 = v51;
    if ( v51 <= 0x40 )
    {
      v20 = v47;
      v34 = v50;
    }
    else
    {
      sub_2585B30(&v34);
      if ( v51 > 0x40 && v50 )
        operator delete[](v50);
      v20 = v47;
    }
    if ( v20 > 0x40 && v46 )
      operator delete[](v46);
  }
  else
  {
    v35 = v8;
    v34 = nullptr;
  }
  v9 = sub_922490(v6, (__int64)&v34);
LABEL_4:
  if ( v9 || (unsigned __int8)sub_922490(v7, (__int64)&v34) )
  {
    v37 = 3;
    v39 = 3;
    v10 = *(_DWORD *)(v6 + 8);
    v36 = &byte_7;
    v38 = &byte_7;
    v45 = v10;
    if ( v10 > 0x40 )
      sub_2585B30(&v44);
    else
      v44 = *(void **)v6;
    v43 = *(_DWORD *)(v6 + 8);
    if ( v43 > 0x40 )
      sub_2585B30(&v42);
    else
      v42 = *(void **)v6;
    if ( !(unsigned __int8)sub_9337C0((__int64)&v42, (__int64)&v44, v8, (__int64)&v36) )
    {
      v51 = *(_DWORD *)(v7 + 8);
      if ( v51 > 0x40 )
        sub_2585B30(&v50);
      else
        v50 = *(void **)v7;
      v47 = *(_DWORD *)(v7 + 8);
      if ( v47 > 0x40 )
        sub_2585B30(&v46);
      else
        v46 = *(void **)v7;
      sub_9337C0((__int64)&v46, (__int64)&v50, v8, (__int64)&v38);
      if ( v47 > 0x40 && v46 )
        operator delete[](v46);
      if ( v51 > 0x40 && v50 )
        operator delete[](v50);
    }
    if ( v43 > 0x40 && v42 )
      operator delete[](v42);
    if ( v45 > 0x40 && v44 )
      operator delete[](v44);
    v41 = 3;
    v40 = &byte_7;
    v51 = v39;
    if ( v39 > 0x40 )
    {
      sub_2585B30(&v50);
      v47 = v37;
      if ( v37 <= 0x40 )
        goto LABEL_19;
    }
    else
    {
      v50 = v38;
      v47 = v37;
      if ( v37 <= 0x40 )
      {
LABEL_19:
        v46 = v36;
LABEL_20:
        v11 = sub_92DE90((__int64)&v46, (__int64)&v50, v8, (__int64)&v40);
        if ( v47 > 0x40 && v46 )
        {
          v32 = v11;
          operator delete[](v46);
          v11 = v32;
        }
        if ( v51 > 0x40 && v50 )
        {
          v33 = v11;
          operator delete[](v50);
          v11 = v33;
        }
        if ( v11 )
          goto LABEL_154;
        if ( !(unsigned __int8)sub_922490((__int64)&v40, (__int64)&v34) )
        {
          v50 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
          sub_A2E0C0(a1, &v50, 2306, 0);
          goto LABEL_154;
        }
        sub_8E6410((__int64)&v50, v22);
        v12 = sub_8F8D30((__int64 *)&v50);
        sub_A1C0C0(&v50);
        sub_8E6310((__int64)&v50, v22);
        v21 = sub_8F8D30((__int64 *)&v50);
        sub_A1C0C0(&v50);
        v45 = *(_DWORD *)(v6 + 8);
        if ( v45 > 0x40 )
          sub_2585B30(&v44);
        else
          v44 = *(void **)v6;
        v43 = *(_DWORD *)(v23 + 8);
        if ( v43 > 0x40 )
          sub_2585B30(&v42);
        else
          v42 = *(void **)v23;
        v13 = sub_9337C0((__int64)&v42, (__int64)&v44, v8, (__int64)&v36);
        if ( v13 )
        {
          v31 = v13;
          if ( v43 <= 0x40 || !v42 )
            goto LABEL_190;
          operator delete[](v42);
          v14 = v31;
          if ( v45 <= 0x40 )
            goto LABEL_154;
        }
        else
        {
          v51 = *(_DWORD *)(v7 + 8);
          if ( v51 > 0x40 )
            sub_2585B30(&v50);
          else
            v50 = *(void **)v7;
          v47 = *(_DWORD *)(v24 + 8);
          if ( v47 > 0x40 )
            sub_2585B30(&v46);
          else
            v46 = *(void **)v24;
          v14 = sub_9337C0((__int64)&v46, (__int64)&v50, v8, (__int64)&v38);
          if ( v47 > 0x40 && v46 )
          {
            v25 = v14;
            operator delete[](v46);
            v14 = v25;
          }
          if ( v51 > 0x40 && v50 )
          {
            v26 = v14;
            operator delete[](v50);
            v14 = v26;
          }
          if ( v43 > 0x40 && v42 )
          {
            v27 = v14;
            operator delete[](v42);
            v14 = v27;
          }
          if ( v45 <= 0x40 )
          {
LABEL_49:
            if ( v14 )
              goto LABEL_154;
            v51 = v39;
            if ( v39 > 0x40 )
              sub_2585B30(&v50);
            else
              v50 = v38;
            v47 = v37;
            if ( v37 > 0x40 )
              sub_2585B30(&v46);
            else
              v46 = v36;
            v15 = sub_92DE90((__int64)&v46, (__int64)&v50, v8, v12);
            if ( v47 > 0x40 && v46 )
            {
              v29 = v15;
              operator delete[](v46);
              v15 = v29;
            }
            if ( v51 > 0x40 && v50 )
            {
              v30 = v15;
              operator delete[](v50);
              v15 = v30;
            }
            if ( v15 )
              goto LABEL_154;
            v45 = v41;
            if ( v41 > 0x40 )
              sub_2585B30(&v44);
            else
              v44 = v40;
            v43 = *(_DWORD *)(v12 + 8);
            if ( v43 > 0x40 )
              sub_2585B30(&v42);
            else
              v42 = *(void **)v12;
            sub_2588D90(&v50, &v42, &v44);
            v47 = v51;
            if ( v51 > 0x40 )
              sub_2585B30(&v46);
            else
              v46 = v50;
            if ( *(_DWORD *)(v12 + 8) > 0x40u && *(_QWORD *)v12 )
              operator delete[](*(void **)v12);
            *(_QWORD *)v12 = v46;
            *(_DWORD *)(v12 + 8) = v47;
            v47 = 0;
            if ( v51 > 0x40 && v50 )
              operator delete[](v50);
            if ( v43 > 0x40 && v42 )
              operator delete[](v42);
            if ( v45 > 0x40 && v44 )
              operator delete[](v44);
            sub_8E6410((__int64)&v50, v22);
            sub_A1DB00(&v50);
            sub_A1C0C0(&v50);
            v45 = *(_DWORD *)(v6 + 8);
            if ( v45 > 0x40 )
              sub_2585B30(&v44);
            else
              v44 = *(void **)v6;
            v43 = *(_DWORD *)(v24 + 8);
            if ( v43 > 0x40 )
              sub_2585B30(&v42);
            else
              v42 = *(void **)v24;
            v16 = sub_9337C0((__int64)&v42, (__int64)&v44, v8, (__int64)&v36);
            if ( !v16 )
            {
              v51 = *(_DWORD *)(v7 + 8);
              if ( v51 > 0x40 )
                sub_2585B30(&v50);
              else
                v50 = *(void **)v7;
              v47 = *(_DWORD *)(v23 + 8);
              if ( v47 > 0x40 )
                sub_2585B30(&v46);
              else
                v46 = *(void **)v23;
              v16 = sub_9337C0((__int64)&v46, (__int64)&v50, v8, (__int64)&v38);
              if ( v47 > 0x40 && v46 )
                operator delete[](v46);
              if ( v51 > 0x40 && v50 )
                operator delete[](v50);
              if ( v43 > 0x40 && v42 )
                operator delete[](v42);
              if ( v45 <= 0x40 )
              {
LABEL_100:
                if ( !v16 )
                {
                  v51 = v39;
                  if ( v39 > 0x40 )
                    sub_2585B30(&v50);
                  else
                    v50 = v38;
                  v47 = v37;
                  if ( v37 > 0x40 )
                    sub_2585B30(&v46);
                  else
                    v46 = v36;
                  v17 = sub_934540((__int64)&v46, (__int64)&v50, v8, v21);
                  if ( v47 > 0x40 && v46 )
                    operator delete[](v46);
                  if ( v51 > 0x40 && v50 )
                    operator delete[](v50);
                  if ( !v17 )
                  {
                    v45 = v41;
                    if ( v41 > 0x40 )
                      sub_2585B30(&v44);
                    else
                      v44 = v40;
                    v43 = *(_DWORD *)(v21 + 8);
                    if ( v43 > 0x40 )
                      sub_2585B30(&v42);
                    else
                      v42 = *(void **)v21;
                    sub_2588D90(&v50, &v42, &v44);
                    v47 = v51;
                    if ( v51 > 0x40 )
                      sub_2585B30(&v46);
                    else
                      v46 = v50;
                    if ( *(_DWORD *)(v21 + 8) > 0x40u && *(_QWORD *)v21 )
                      operator delete[](*(void **)v21);
                    *(_QWORD *)v21 = v46;
                    *(_DWORD *)(v21 + 8) = v47;
                    v47 = 0;
                    if ( v51 > 0x40 && v50 )
                      operator delete[](v50);
                    if ( v43 > 0x40 && v42 )
                      operator delete[](v42);
                    if ( v45 > 0x40 && v44 )
                      operator delete[](v44);
                    sub_8E6310((__int64)&v50, v22);
                    sub_A1DB00(&v50);
                    sub_A1C0C0(&v50);
                    sub_A1DB00(v22);
                    if ( v41 > 0x40 && v40 )
                      operator delete[](v40);
                    if ( v39 > 0x40 && v38 )
                      operator delete[](v38);
                    if ( v37 > 0x40 && v36 )
                      operator delete[](v36);
                    if ( v35 > 0x40 && v34 )
                      operator delete[](v34);
                    v18 = 1;
                    goto LABEL_167;
                  }
                }
                goto LABEL_154;
              }
LABEL_98:
              if ( v44 )
                operator delete[](v44);
              goto LABEL_100;
            }
            if ( v43 > 0x40 && v42 )
            {
              operator delete[](v42);
              if ( v45 > 0x40 )
                goto LABEL_98;
LABEL_154:
              if ( v41 > 0x40 && v40 )
                operator delete[](v40);
              if ( v39 > 0x40 && v38 )
                operator delete[](v38);
              if ( v37 > 0x40 && v36 )
                operator delete[](v36);
              goto LABEL_163;
            }
LABEL_190:
            if ( v45 > 0x40 && v44 )
              operator delete[](v44);
            goto LABEL_154;
          }
        }
        if ( v44 )
        {
          v28 = v14;
          operator delete[](v44);
          v14 = v28;
        }
        goto LABEL_49;
      }
    }
    sub_2585B30(&v46);
    goto LABEL_20;
  }
  v50 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  sub_A2E0C0(a1, &v50, 2306, 0);
LABEL_163:
  if ( v35 > 0x40 && v34 )
    operator delete[](v34);
  v18 = 0;
LABEL_167:
  sub_A1C0C0(v49);
  sub_A1C0C0(v48);
  return v18;
}

