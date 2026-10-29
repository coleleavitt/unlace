__int64 __fastcall sub_268600(__int64 a1, const char *a2, __int64 a3, __int64 a4, double a5)
{
  char v5; // bp
  __int64 result; // rax
  void *v8; // rsi
  __int64 v9; // rax

  v5 = (char)a2;
  if ( (_BYTE)a2 == 3 )
  {
    a2 = "{    \"layout\" : {        \"main\" : {            \"type\" : \"vsplit\",            \"partitions\" : [15, 70, "
         "15],            \"hide_handles\" : true,            \"children\" : [                \"Progress\",              "
         "  {                    \"type\" : \"hsplit\",                    \"partitions\" : [33, 33, 33],                "
         "    \"children\" : [                        \"Local\",                        \"Common\",                      "
         "  \"Remote\"                    ]                },                \"Output\"            ],            \"area_g"
         "eom\" : {                \"frame_geometry\":[                    0,                    0,                    -1"
         ",                    -1                ],                \"normal_geometry\":[                    0,           "
         "         0,                    -1,                    -1                ],                \"screen_number\":0, "
         "               \"maximized\":true,                \"fullscreen\":false,                \"screen_width\":-1     "
         "       }        }    },    \"default_toolbars\" : [        \"MergeToolBar\"    ],    \"menubar\" : [        \"d"
         "iffmerge:File\",        \"diffmerge:Edit\",        \"diffmerge:Jump\",        \"diffmerge:Search\",        \"di"
         "ffmerge:Windows\",        \"diffmerge:Help\"    ],    \"widgets_config\" : {        \"Local\" : {            \""
         "partitions\" : [80, 20]        },        \"Common\" : {            \"partitions\" : [80, 20]        },        \""
         "Remote\" : {            \"partitions\" : [80, 20]        },        \"Output\" : {            \"cli\" : false   "
         "     }    },    \"focus\" : \"Local\"}";
  }
  else if ( (unsigned __int8)a2 > 3u )
  {
    if ( (_BYTE)a2 != 4 )
      goto LABEL_16;
    a2 = "{    \"layout\" : {        \"main\" : {            \"type\" : \"vsplit\",            \"partitions\" : [15, 70, "
         "15],            \"hide_handles\" : true,            \"children\" : [                \"Progress\",              "
         "  {                    \"type\" : \"hsplit\",                    \"partitions\" : [50, 50],                    "
         "\"children\" : [                        \"Left\",                        \"Right\"                    ]        "
         "        },                \"Output\"            ],            \"area_geom\" : {                \"frame_geometry"
         "\":[                    0,                    0,                    -1,                    -1                ],"
         "                \"normal_geometry\":[                    0,                    0,                    -1,       "
         "             -1                ],                \"screen_number\":0,                \"maximized\":true,       "
         "         \"fullscreen\":false,                \"screen_width\":-1            }        }    },    \"default_tool"
         "bars\" : [        \"DiffToolBar\"    ],    \"menubar\" : [        \"diffmerge:File\",        \"diffmerge:Edit\""
         ",        \"diffmerge:Jump\",        \"diffmerge:Search\",        \"diffmerge:Windows\",        \"diffmerge:Help"
         "\"    ],    \"widgets_config\" : {        \"Left\" : {            \"partitions\" : [80, 20]        },        \""
         "Right\" : {            \"partitions\" : [80, 20]        },        \"Output\" : {            \"cli\" : false    "
         "    }    },    \"focus\" : \"Local\"}";
  }
  else if ( (_BYTE)a2 == 1 )
  {
    a2 = "{    \"layout\" : {        \"main\" : {            \"type\" : \"vsplit\",            \"partitions\" : [80, 20],"
         "            \"children\" : [                {                    \"type\" : \"hsplit\",                    \"pa"
         "rtitions\" : [20, 80],                    \"children\" : [                        {                            "
         "\"type\" : \"vsplit\",                            \"partitions\" : [80, 20],                            \"child"
         "ren\" : [                                \"Functions\",                                \"Graph overview\"      "
         "                      ]                        },                        {                            \"type\" "
         ": \"tabs\",                            \"children\" : [                                \"IDA View-A\",         "
         "                       \"Hex View-1\",                                \"Local Types\",                         "
         "       \"Imports\",                                \"Exports\"                            ]                    "
         "    }                    ]                },                \"Output\"            ],            \"area_geom\" :"
         " {                \"frame_geometry\":[                    0,                    0,                    -1,      "
         "              -1                ],                \"normal_geometry\":[                    0,                  "
         "  0,                    -1,                    -1                ],                \"screen_number\":0,        "
         "        \"maximized\":true,                \"fullscreen\":false,                \"screen_width\":-1            "
         "}        }    },    \"focus\" : \"IDA View-A\",    \"default_toolbars\" : [        \"FileToolBar\",        \"Ju"
         "mpToolBar\",        \"SearchToolBar\",        \"AnalysisToolBar\",        \"EditToolBar\",        \"DebugToolBa"
         "r\",        \"BreakpointsToolBar\"    ],    \"widgets_config\" : {        \"Local Types\" : {            \"part"
         "itions\" : [20, 80]        }    },    \"synced\": [        [            \"view:IDA View-A\",            \"view:"
         "Hex View-1\"        ]    ],    \"history_groups\": {        \"Shared group 1\":        [            \".*IDA Vie"
         "w-.*\",            \".*Pseudocode-.*\",            \".*Types Layout\",            \".*Stack of.*\",            "
         "\".*Hex View-.*\"        ]    }}";
  }
  else
  {
    if ( (_BYTE)a2 != 2 )
      goto LABEL_16;
    a2 = "{    \"inf\" : {        \"flat_dto\" : {            \"indent\" : 0,            \"show_line_prefix\" : true,    "
         "        \"opcode_bytes\" : 0        },        \"graph_dto\" : {            \"indent\" : 0,            \"show_li"
         "ne_prefix\" : true,            \"opcode_bytes\" : 0        },        \"show_stack\" : false,        \"show_over"
         "view\" : true    },    \"layout\" : {        \"main\" : {            \"type\" : \"vsplit\",            \"partit"
         "ions\" : [78, 22],            \"children\" : [                {                    \"index\" : 0,              "
         "      \"type\" : \"tabs\",                    \"children\" : [                        {                        "
         "    \"type\" : \"vsplit\",                            \"children\" : [                                {        "
         "                            \"type\" : \"hsplit\",                                    \"children\" : [         "
         "                               \"IDA View-$IP\",                                        {                      "
         "                      \"type\" : \"vsplit\",                                            \"children\" : [       "
         "                                         \"General registers\",                                                "
         "\"Modules\",                                                \"Threads\"                                        "
         "    ],                                            \"partitions\" : [                                           "
         "     34,                                                33,                                                33  "
         "                                          ]                                        }                           "
         "         ],                                    \"partitions\" : [                                        70,   "
         "                                     30                                    ]                                }, "
         "                               {                                    \"type\" : \"hsplit\",                     "
         "               \"children\" : [                                        \"Graph overview\",                     "
         "                   \"Hex View-1\",                                        \"Stack view\"                       "
         "             ],                                    \"partitions\" : [                                        20"
         ",                                        50,                                        30                         "
         "           ]                                }                            ],                            \"partit"
         "ions\" : [                                72,                                28                            ]   "
         "                     },                        \"Local Types\"                    ]                },          "
         "      \"Output\"            ],            \"area_geom\" : {                \"frame_geometry\":[                "
         "    0,                    0,                    -1,                    -1                ],                \"no"
         "rmal_geometry\":[                    0,                    0,                    -1,                    -1     "
         "           ],                \"screen_number\":0,                \"maximized\":true,                \"fullscree"
         "n\":false,                \"screen_width\":-1            }        }    },    \"focus\" : \"IDA View-$IP\",    \""
         "default_toolbars\" : [        \"FileToolBar\",        \"JumpToolBar\",        \"SearchToolBar\",        \"Analy"
         "sisToolBar\",        \"EditToolBar\",        \"DebugToolBar\",        \"BreakpointsToolBar\"    ],    \"widgets"
         "_config\" : {        \"Stack view\" : {            \"bytes_per_token\" : \"addrsize\",            \"tokens_per_"
         "line\" : 1,            \"show_text\" : true,            \"data_kind\" : 4,            \"int_format\" : 0       "
         " },        \"Local Types\" : {            \"partitions\" : [20, 80]        }    },    \"synced\" : [        [  "
         "          \"reg:$IP\",            \"view:IDA View-$IP\"        ],        [            \"reg:$SP\",            \""
         "view:Stack view\"        ]    ]}";
  }
  result = sub_4B86E0(a1, a2);
  if ( (_BYTE)result )
  {
    if ( a3 )
    {
      v8 = *(void **)a3;
      if ( *(_QWORD *)(a3 + 16) <= 0xAu )
      {
        v9 = qvector_reserve(a3, v8, 11, 1);
        *(_QWORD *)a3 = v9;
        v8 = (void *)v9;
      }
      *(_QWORD *)(a3 + 8) = 11;
      qmemcpy(v8, "<original>", 10);
      result = *(_QWORD *)a3;
      *(_BYTE *)(*(_QWORD *)a3 + 10LL) = 0;
      *(_BYTE *)(a3 + 24) = 0;
      *(_BYTE *)(a3 + 25) = v5;
    }
    return result;
  }
LABEL_16:
  if ( under_debugger )
    BUG();
  interr(40618, a2, a3, a4, a5);
  return sub_2686F0();
}
